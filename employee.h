//#include <string>
class Employee{
protected:
	char *name;
	int individualEmpNo;
	int grade;
	float accumPay;
	static int EmployeeNo;
public:
	Employee();
	~Employee();
	void pay();
	void promote(int);
	void displayStatus();
};

class Technician:public Employee{
protected:
	float hourlyRate;
	int workHours;
public:
	Technician();
	void pay();
	void displayStatus();
};

class Manager:virtual public Employee{
protected:
	int i;
	float monthlyPay;
public:
	Manager();
	void pay();
	void displayStatus();
};

class Salesman:virtual public Employee{
protected:
	float CommRate;
	float sales;
public:
	Salesman();
	void pay();
	void displayStatus();
};

class Salesmanager:public Manager,public Salesman{
public:
	Salesmanager();
	void pay();
	void displayStatus();
};





















