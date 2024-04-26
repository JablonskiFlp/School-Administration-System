#pragma once
#include "Person.h"
#include <iostream>
using namespace std;
#include <string>
//typedef enum (POLSKI, MATEMATYKA, FIZYKA) Subjects;

class Pupil : public Person
{
public:
	Pupil( string sName = "", int newAge = 0, string className = "" );
	//Pupil( const Pupil& pupil );
	//virtual ~Pupil();
	//Pupil& operator = ( const Pupil& pupil );

	void setNote( Subjects subject, double note );
	void setAve();
	void setClassName( string newClassName );
	//void setID( string id );

	string GetClassName() const;
	double getAve() const;
	//string getID() const;
	//double* getNotes();

	double calcAve();
	void clearNotes();

	virtual void printOutfit() const {}; // =0 wtedy metoda abstrakcyjna/czysta wtedy klasa jest czysta i nie wolno robic obiektow tej klasy
	void printPupil( /*const Pupil& pupil*/ );

protected:
  string m_ID; // index ucznia bez m_ i f_

private:
  string m_ClassName;
  double m_Notes[MAXNOTES];
  static int m_baseID;
	double m_Ave;
};


//++++++++++++++++++INLINE++++++++++++++++++++++++

inline void Pupil::setNote( Subjects subject, double note )
{
	if( note == 2.0 || note == 3.0 || note == 3.5 || note == 4.0 || note == 4.5 || note == 5.0 || note == 0 && subject >= POLSKI && subject < MAXNOTES )
		this->m_Notes[subject] = note;
	else
		cerr << "Error: Invalid note entered\n";
	setAve();
}
//void Pupil::setID( string id )
//{
//	this->m_ID = id;
//}

inline void Pupil::setClassName( string newClassName )
{
	this->m_ClassName = newClassName;
}

inline void Pupil::setAve()
{
	this->m_Ave = this->calcAve();
}

//GETTERS
inline string Pupil::GetClassName() const
{
	return this->m_ClassName;
}/*
string Pupil::getID() const
{
	return this->m_ID;
}
double* Pupil::getNotes()
{
	return this->m_Notes;
}*/
inline double Pupil::getAve() const
{
	return this->m_Ave;
}

