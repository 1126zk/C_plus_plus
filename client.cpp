#include "person.h"
#include <iostream>
using namespace std;

int main(){
	Person p;
	Person stooges[3];
	p.setAge(12);
	stooges[0].setAge(45);
	stooges[1].setAge(46);
	stooges[2].setAge(44);
	cout << p.getAge() <<endl;
	for (int i = 0;i<3;i++){
		cout << stooges[i].getAge() <<endl;
	}


	return 0;
}
