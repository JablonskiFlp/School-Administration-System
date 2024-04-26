#include "Worker.h"

Worker::Worker( string sName, int newAge, double newSalary, int years_worked ) : Person( sName, newAge )
{
	setSalary( newSalary );
	setYearsWorked( years_worked );
}

void Worker::workerInfo() 
{
	cout << "Pracownik " << getName() << " w wieku: " << getAge() << " lat, przepracowal w szkole " << this->years_worked << " lat" << endl;
	calcNetto();
}
