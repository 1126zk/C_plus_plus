#include "person.h"
#include <iostream>
using namespace std;

void Person::setAge(unsigned n){
	age = n;
}
unsigned Person::getAge() const{
	return age;
}

