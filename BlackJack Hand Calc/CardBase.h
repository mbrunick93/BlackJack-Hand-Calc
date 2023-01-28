#pragma once
class CardBase
{



private:
	struct ace 
	{
		const short low = 1;
		const short high = 11;
	} m_ace;

	enum playerMove
	{
		Hit,
		Stand
	};

	const short jack = 10;
	const short queen = 10;
	const short king = 10;

};

