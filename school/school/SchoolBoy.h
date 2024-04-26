#pragma once
#include "Pupil.h"
class SchoolBoy :
    public Pupil
{
public:
  SchoolBoy( string sName = "", int newAge = 0, string className = "" );

  virtual void printOutfit() const;
};

