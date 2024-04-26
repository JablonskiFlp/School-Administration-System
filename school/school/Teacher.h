#pragma once
#include "Worker.h"
using namespace std;

class Teacher :
    public Worker
{
public:
  Teacher( string sName = "", int newAge = 0, double newSalary = 0,
    int years_worked = 0, bool isTutor = 0, string className = "",
    Subjects subject = MATEMATYKA);

  virtual void calcNetto();

  bool isTutor() const;
  string getClass() const;
  Subjects getSubject() const;

  void setTutor( bool tutoring );
  void setClass( string className );
  void setSubject( Subjects subjects );

private:
  bool m_isTutor;
  string m_ClassName;
  Subjects subject;
};

inline bool Teacher::isTutor() const
{
  return this->m_isTutor;
}
inline string Teacher::getClass() const
{
  return this->m_ClassName;
}
inline Subjects Teacher::getSubject() const
{
  return this->subject;
}


inline void Teacher::setTutor( bool tutoring )
{
  this->m_isTutor = tutoring;
}
inline void Teacher::setClass( string className )
{
  if( isTutor() )
    this->m_ClassName = className;
}
inline void Teacher::setSubject( Subjects subjects )
{
  this->subject = subjects;
}

