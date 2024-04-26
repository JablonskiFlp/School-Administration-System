#pragma once
#include "Person.h"
#define KW_WOLNA 556.02
#define KOSZTY_UZYSKANIA_PRZYCHODU 111.25
class Worker :
    public Person
{
public:
  Worker( string sName = "", int newAge = 0, double newSalary = 3000, int years_worked = 0 );
  //Worker( const Worker& W );

  //Worker& operator = ( const Worker& W );
  virtual void calcNetto() = 0; // aby nie mozna by³o stworzyc obiektu klasy worker
  void workerInfo();

  void setSalary( double nSalary );
  void setYearsWorked( double years_worked );

  double getSalary() const;
  double getYearsWorked() const;

private:
  double m_salary;
  int years_worked;
};

//==============INLINE================
inline void Worker::setSalary( double nSalary )
{
  this->m_salary = nSalary;
}
inline void Worker::setYearsWorked( double years_worked )
{
  this->years_worked = years_worked;
}

inline  double Worker::getSalary() const
{
  return this->m_salary;
}
inline double Worker::getYearsWorked() const
{
  return this->years_worked;

}