#include "CardBase.h"

 CardBase::playerMove CardBase::checkSoftTotal()
{
	return playerMove();
}

 CardBase::playerMove CardBase::checkHardTotal(const std::string card1, const std::string card2, const std::string dealer)
 {
	 int l_dealer = -1;
	 int l_card1 = std::stoi(card1);
	 int l_card2 = std::stoi(card2);
	 int sum = l_card1 + l_card2;

	 if ((sum >= 17) && (dealer == "a" || dealer == "A"))
	 {
		 return Stand;
	 }
	 
	 if (dealer == "a" || dealer == "A")
	 {
		 l_dealer = 11;
	 }
	 else 
	 {
		 l_dealer = std::stoi(dealer);
	 }


	 if (((sum >= 13) && (sum <= 17)) && (l_dealer <= 6))
	 {
		 return Stand;
	 }

	 else if (((sum >= 13) && (sum <= 17)) && (l_dealer > 6))
	 {
		 return Hit;
	 }

	 else if ( ( sum == 12 ) && ( ( l_dealer <= 3 ) || ( l_dealer >= 7 ) ) )
	 {
		return Hit;
	 }

	 else if ((sum == 12) && ((l_dealer > 3) || (l_dealer < 7)))
	 {
		 return Stand;
	 }

	 else
	 {
		 return Hit;
	 }

	 
}

bool CardBase::splitPair()
{
	return false;
}
