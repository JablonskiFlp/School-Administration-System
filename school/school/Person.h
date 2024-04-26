#pragma once

#include <iostream>
#include <string>
enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };
#define MAXNOTES 8

using namespace std;

class Person
{
public:
  Person( string sName = "",  int newAge = 0 ) noexcept; // nie rzuca wyjatkami
  Person( const Person& p );
  Person& operator = ( const Person& p ) = default;

  void setPerson( string sName, int newAge );
  void setName( string sName );
  void setAge( int newAge );

  string getName() const;
  int getAge() const;

private:
  string m_name; // imie i nazwisko
  int    m_Age;
};

//======================INLINE========================
inline void Person::setName( string sName )
{
  this->m_name = sName;
}

inline void Person::setAge( int newAge )
{
  this->m_Age = newAge;
}

inline void Person::setPerson( string sName, int nAge )
{
  setName( sName );
  setAge( nAge );
}

inline string Person::getName() const
{
  return this->m_name;
}

inline int Person::getAge() const
{
  return this->m_Age;
}