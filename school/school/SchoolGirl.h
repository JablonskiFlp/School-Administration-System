#pragma once
#include "Pupil.h"

class SchoolGirl :
    public Pupil
{
public:
  SchoolGirl( string sName = "Anna Nowak", int newAge = 18, string className = "1a" );

  virtual void printOutfit() const;
};

