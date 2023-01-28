#include <iostream>

#include "CardBase.h"



int main(void)
{
	std::string card1, card2, dealer;
	short move = -1;


	while (true)
	{
		std::cout << "Enter Player 1st card\n";
		std::cin >> card1;

		std::cout << "Enter Player 2nd card\n";
		std::cin >> card2;

		std::cout << "Enter dealer card\n";
		std::cin >> dealer;

		if ( ( (card1 == "a") || (card1 == "A") || (card2 =="a") || (card2 == "A") ) && ( card1 != card2 ) )
		{
			move = CardBase::checkSoftTotal();

			if (move == 0)
			{
				printf("Hit\n");
			}
			else if (move == 1)
			{
				printf("Stand\n");
			}
		}

		else {
			move = CardBase::checkHardTotal(card1, card2, dealer);
			if (move == 0)
			{
				printf("\n***********\n");
				printf("*         *\n");
				printf("*   Hit   *\n");
				printf("*         *\n");
				printf("***********\n\n\n");
			}
			else if (move == 1)
			{
				printf("\n***********\n");
				printf("*         *\n");
				printf("*  Stand  *\n");
				printf("*         *\n");
				printf("***********\n\n\n");
			}

		}



	}
}