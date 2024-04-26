#include "Person.h"

Person::Person( string sName, int newAge ) noexcept
{
  setPerson( sName, newAge );
}

Person::Person( const Person& p )
{
  setPerson( "Jan Nowak", 18 );
  *this = p;
}

//Person& Person::operator = ( const Person& p )
//{
//  setPerson( p.getName(), p.getAge() );
//  return *this;
//} zastapiony przez = default
