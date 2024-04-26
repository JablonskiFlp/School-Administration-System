// school.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SchoolGirl.h"
#include "SchoolBoy.h"
//#include "Pupil.h"
//#include "Worker.h"
#include "Teacher.h"
#include "Admin.h"
#define PUPILNO 8
#define ADMINNO 3
#define TEACHERNO 6

void printPupils( Pupil** tab, int pupilNo );
void sortPupils( Pupil** tab, int pupilNo );
void printWorkers( Worker** tab, int workerNo );

int main()
{
  cout << "================PRACOWNICY==================" << endl;
  Worker* admins[ADMINNO] = { NULL };
  Worker* a = NULL;
  admins[0] = a = new Admin( "Jakub Kazimierz", 33, 3030, 3, MLODSZY_SPECJALISTA );
  admins[1] = a = new Admin( "Jan Kazimierz", 23, 5000, 6, SPECJALISTA );
  admins[2] = a = new Admin( "Kacper Kazimierz", 34, 7000, 22, STARSZY_SPECJALISTA );
  printWorkers( admins, ADMINNO );

  cout << "================NAUCZYCIELE==================" << endl;
  Worker* teachers[TEACHERNO] = { NULL };
  Worker* t = NULL;
  teachers[0] = t = new Teacher( "Anna Jac", 33, 4000, 3, 1, "1a", MATEMATYKA);
  teachers[1] = t = new Teacher( "Jola Jac", 32, 4000, 3, 0, "3b", POLSKI );
  teachers[2] = t = new Teacher( "Ola Jac", 66, 4000, 22, 0, "2s", NIEMIECKI );
  teachers[3] = t = new Teacher( "Bozena Jac", 43, 4000, 14, 1, "2g", FIZYKA );
  teachers[4] = t = new Teacher( "Svietlava Jac", 23, 4000, 2, 1, "3a", ANGIELSKI );
  teachers[5] = t = new Teacher( "Jana Jac", 87, 4000, 13, 1, "1e", INFORMATYKA );
  printWorkers( teachers, TEACHERNO );

  cout << "================UCZNIOWIE==================" << endl;
  Pupil* pupils[PUPILNO] = { NULL };
  Pupil* v = NULL;
  //v = new SchoolGirl( "Putellas Ant", 18, "1a" );
  pupils[0] = v = new SchoolGirl( "Putellas Ant", 18, "1a" );
  v->setNote( POLSKI, 4 );
  v->setNote( MATEMATYKA, 4 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 4 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI, 4 );

  pupils[1] = v = new SchoolBoy( "Leo Messi", 22, "3b" );
  v->setNote( POLSKI, 2 );
  v->setNote( MATEMATYKA, 2 );
  v->setNote( FIZYKA, 2 );
  v->setNote( CHEMIA, 5 );
  v->setNote( INFORMATYKA, 2 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI, 3.5 );

  pupils[2] = v = new SchoolBoy( "Cristiano Ronaldo", 21, "3a" );
  v->setNote( POLSKI, 2 );
  v->setNote( MATEMATYKA, 3 );
  v->setNote( FIZYKA, 2 );
  v->setNote( CHEMIA, 4.5 );
  v->setNote( INFORMATYKA, 4 );
  v->setNote( ANGIELSKI, 5 );
  v->setNote( NIEMIECKI, 4 );

  pupils[3] = v = new SchoolBoy( "Neymar JR", 12, "2a" );
  v->setNote( POLSKI, 2 );
  v->setNote( MATEMATYKA, 2 );
  v->setNote( FIZYKA, 2 );
  v->setNote( CHEMIA, 2 );
  v->setNote( INFORMATYKA, 2 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI, 4 );

  pupils[4] = v = new SchoolBoy( "Robert Lewandowski", 18, "1a" );
  v->setNote( POLSKI, 4 );
  v->setNote( MATEMATYKA, 4 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 4 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI, 4 );

  pupils[5] = v = new SchoolGirl( "Aneta Lew", 12, "1s" );
  v->setNote( POLSKI, 2 );
  v->setNote( MATEMATYKA, 4 );
  v->setNote( FIZYKA, 4 );
  v->setNote( CHEMIA, 4 );
  v->setNote( INFORMATYKA, 4 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI,3 );

  pupils[6] = v = new SchoolGirl( "Grzegorz Bronz", 44, "2f" );
  v->setNote( POLSKI, 2 );
  v->setNote( MATEMATYKA, 4 );
  v->setNote( FIZYKA, 5 );
  v->setNote( CHEMIA, 5 );
  v->setNote( INFORMATYKA, 5 );
  v->setNote( ANGIELSKI, 4 );
  v->setNote( NIEMIECKI, 4 );

  pupils[7] = v = new SchoolGirl( "Kacper Lalek", 18, "1a" );

  sortPupils( pupils, PUPILNO );
  printPupils( pupils, PUPILNO );
}

void printPupils( Pupil** tab, int pupilNo )
{
  for( int i = 0; i < pupilNo; i++ )
  {
    tab[i]->printPupil();
    cout << "\n\n";
  }
}
void printWorkers( Worker** tab, int workerNo )
{
  for( int i = 0; i < workerNo; i++ )
  {
    tab[i]->workerInfo();
    cout << "\n\n";
  }
}

void sortPupils( Pupil** tab, int pupilNo )
{
  for( int i = 0; i < pupilNo; i++ )
  {
    int j = i - 1;
    Pupil* v = tab[i];

    while( j >= 0 && v->getName() < tab[j]->getName() )
    {
      tab[j + 1] = tab[j--];
    }
    tab[j + 1] = v;
  }
}
