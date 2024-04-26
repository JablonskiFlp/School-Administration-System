#include "Admin.h"


Admin::Admin( string sName, int newAge, double newSalary, int years_worked, Job job ):Worker(sName, newAge, newSalary, years_worked )
{
  setJob( job );
}


void Admin::calcNetto()
{
  double podatek = ((getSalary() - KOSZTY_UZYSKANIA_PRZYCHODU) * 0.18) - KW_WOLNA;
  if( podatek < 0 ) podatek = 0;
  double netto = getSalary() - podatek;

  cout << "\nStanowisko: Admin\n"
    << "Pensja brutto: " << getSalary() 
    << "\nPodatek: " << podatek
    << "\nPensja netto: " << netto << endl;
}