#include "SchoolGirl.h"

SchoolGirl::SchoolGirl( string sName, int newAge, string className )
	: Pupil( sName, newAge, className )
{
	m_ID = "F_" + m_ID;
}

void SchoolGirl::printOutfit() const
{
	cout << "Biala bluzka z krawatem, szkolna marynarka, granatowa/czarna spodniczka, plaskie obuwie \n";
}