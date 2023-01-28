#pragma once
#include <string>
class CardBase
{

private:
	 enum playerMove
	{
		Hit,
		Stand
	};

public:
	static playerMove checkSoftTotal();
	static playerMove checkHardTotal(const std::string card1, const std::string card2, const std::string dealer);
	bool splitPair();
};

