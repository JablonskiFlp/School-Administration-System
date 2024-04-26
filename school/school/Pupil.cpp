#include "Pupil.h"

int Pupil::m_baseID = 1000;

Pupil::Pupil( string sName, int newAge, string className )
	: Person( sName, newAge )
{
	//static int id = 1000;
	setClassName( className );
	clearNotes();
	m_ID = to_string( m_baseID++ );
	setAve();
	//id++;
}

//Pupil::Pupil( const Pupil& pupil )
//{
//	*this = pupil;
//}

//Pupil& Pupil::operator = ( const Pupil& pupil )
//{
//	setPerson( pupil.getName(), pupil.getAge() );
//	this->m_baseID = getID();
//	setClassName( pupil.GetClassName() );
//	for( int i = 0; i < 7; i++ )
//		this->m_Notes[i] = pupil.m_Notes[i];
//	return *this;
//}

void Pupil::clearNotes()
{
	memset( m_Notes, 0, MAXNOTES * sizeof( double ) );
}

double Pupil::calcAve()
{
	double avg = 0;
	int count = 0;
	for( int i = 0; i < MAXNOTES; i++ )
	{
		
		if( this->m_Notes[i] > 1)
		{
			avg += this->m_Notes[i];
			count++;
		}
	}
	return m_Ave = (count) ? avg / count : 0;
}

void Pupil::printPupil( /*const Pupil& pupil*/ )
{
	cout << "ID: " << this->m_ID << endl
		<< "Imie i nazwisko: " << getName() << endl
		<< "Klasa: " << GetClassName() << endl
		<< "Wiek: " << getAge() << endl
		<< "Srednia ocen: " << getAve() << endl;
	printOutfit();
}
