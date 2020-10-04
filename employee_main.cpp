#include <iostream>
#include "employee.h"
#include <string>
using namespace std;

int main(){

	Manager s1;
	s1.displayStatus();
	s1.pay();

	Technician t1;
	t1.displayStatus();
	t1.pay();

	Salesman s2;
	s2.displayStatus();
	s2.pay();

	Salesmanager s3;
	s3.displayStatus();
	s3.pay();

	return 0;
}
