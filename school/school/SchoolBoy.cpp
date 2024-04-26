#include "SchoolBoy.h"

SchoolBoy::SchoolBoy( string sName, int newAge, string className )
	: Pupil( sName, newAge, className )
{
	m_ID = "M_" + m_ID;
}

void SchoolBoy::printOutfit() const
{
	cout << "Biala/niebieska koszula z krawatem, szkolna marynarka, polbuty, granatowa/czarna spodnie. \n";
}
