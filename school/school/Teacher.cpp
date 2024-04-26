#include "Teacher.h"


Teacher::Teacher( string sName, int newAge, double newSalary,
  int years_worked, bool isTutor, string className,
  Subjects subject ):Worker(sName, newAge, newSalary, years_worked)
{
  setTutor( isTutor );
  setClass( className );
  setSubject( subject );
}

void Teacher::calcNetto() 
{
  int staz = getYearsWorked();
  double procentStazu = staz >= 5 ? staz / 100. : 0;
  if( staz >= 20 ) procentStazu = 1 / 5.;
  double podstawaOpodatkowania = getSalary() * procentStazu + getSalary();
  if( m_isTutor ) podstawaOpodatkowania += 400;

  double podatek = (0.8* ((podstawaOpodatkowania - 0.5* KOSZTY_UZYSKANIA_PRZYCHODU) * 0.18) + 0.2 * ((podstawaOpodatkowania - KOSZTY_UZYSKANIA_PRZYCHODU) * 0.18)) - KW_WOLNA;
  if( podatek < 0 )  podatek = 0;

  double netto = podstawaOpodatkowania - podatek;

  string subjectName;
  switch( getSubject() ) {
  case POLSKI: subjectName = "Polski"; break;
  case MATEMATYKA: subjectName = "Matematyka"; break;
  case FIZYKA: subjectName = "Fizyka"; break;
  case CHEMIA: subjectName = "Chemia"; break;
  case INFORMATYKA: subjectName = "Informatyka"; break;
  case ANGIELSKI: subjectName = "Angielski"; break;
  case NIEMIECKI: subjectName = "Niemiecki"; break;
  default: subjectName = "Nieznany przedmiot";
  }
  cout << "\nStanowisko: Nauczyciel\n" 
    << "Uczy: " << subjectName <<endl
    << "Pensja brutto: " << podstawaOpodatkowania 
    << "\nPodatek: " << podatek
    << "\nPensja netto: " << netto << endl;
}