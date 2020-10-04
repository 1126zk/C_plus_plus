#include "Employee.h"
#include <iostream>
using namespace std;
//----------------defination of Employee-----------
int Employee::EmployeeNo=0;
Employee::Employee(){
	char namestr[50];
	cout << "hello, "<<this<< ","<<"please enter your name:";
	cin >> namestr;
	name = new char[strlen(namestr)+1];

	strcpy(name,namestr);
	individualEmpNo = EmployeeNo++;

	grade=1;
	accumPay = 0.0;
}

Employee::~Employee(){
	delete name;
}

void Employee::pay(){

}

void Employee::promote(int increment){
	grade+=increment;
}

void Employee::displayStatus(){

}

//----------------defination of Technician-----------
Technician::Technician(){
	hourlyRate = 100;
	grade = 2;
}

void Technician::pay(){
	cout << "please enter your workHours:";
	cin>>workHours;
	accumPay = hourlyRate*workHours;
	cout <<"your accumPay is :"<<accumPay<<endl<<endl;
}

void Technician::displayStatus(){
	cout << "name:"<<name<<endl;
	cout << "individualEmpNo:"<<individualEmpNo<<endl;
	cout << "grade:"<< grade<<endl;
	cout << "hourlyRate:"<< hourlyRate<<endl<<endl;
}
//----------------defination of Manager-----------
Manager::Manager(){
	monthlyPay = 8000;
	grade = 1;
}

void Manager::pay(){	
	accumPay = monthlyPay;
	cout <<"your accumPay is :"<< accumPay<<endl<<endl;
}

void Manager::displayStatus(){
	cout << "name:"<<name<<endl;
	cout << "individualEmpNo:"<<individualEmpNo<<endl;
	cout << "grade:"<< grade<<endl;
	cout << "monthlyPay:"<< monthlyPay<<endl<<endl;
}
//----------------defination of Salesman-----------
Salesman::Salesman(){
	CommRate = 0.04;
	grade = 3;
}

void Salesman::pay(){
	cout << "please enter your sales:";
	cin >> sales;
	accumPay = CommRate*sales;
	cout <<"your accumPay is :"<< accumPay<<endl<<endl;
}

void Salesman::displayStatus(){
	cout << "name:"<<name<<endl;
	cout << "individualEmpNo:"<<individualEmpNo<<endl;
	cout << "grade:"<< grade<<endl;
	cout << "CommRate:"<< CommRate<<endl<<endl;
}
//----------------defination of Salesmanager-----------
Salesmanager::Salesmanager(){
	monthlyPay = 5000;
	CommRate = 0.05;
	grade = 3;
}

void Salesmanager::pay(){
	cout << "please enter your sales:";
	cin >> sales;
	accumPay = CommRate*sales+monthlyPay;
	cout <<"your accumPay is :"<< accumPay<<endl<<endl;
}

void Salesmanager::displayStatus(){
	cout << "name:"<<name<<endl;
	cout << "individualEmpNo:"<<individualEmpNo<<endl;
	cout << "grade:"<< grade<<endl;
	cout << "CommRate"<< CommRate<<endl;
	cout << "monthlyPay:"<<monthlyPay<<endl<<endl;
}
