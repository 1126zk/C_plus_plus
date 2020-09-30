#include <iostream>
using namespace std;

class Set{
private:
	int data[];
	int count;
public:
	Set() {count=0;}
	bool insert(const int n);
	bool del(const int n);
	void dump();
	int getCount() {return count;}
	int getData() {return data;}

	Set intersection( Set &);
	Set unioning(Set &);
	Set subtraction(Set &);
};

bool Set::insert(int n){
	for(int i=0;i<count;i++){
		if(data[i]==n)
			return 0;
	}
	data[count++]=n;
	return true;
}

bool Set::del(int n){
	for (int i=0;i<count;i++){
		if (data[i]==n){
			for (int j=i;j<count;j++){
				data[j] = data[j+1];	
			break;
			}
		}
	}
}

void Set::dump(){
	for(int i=0;i<count;i++){
		cout << data[i];
	}
	cout <<endl;
}

Set Set::intersection(Set &temp){
	Set result;
	for(int i=0;i<count;i++){
		for (int j=0;j<temp.getCount();j++){
			if (data[i]==getData[j]){
				result.insert(data[i]);
			}

		}
	}
	return result;
}

Set Set::unioning(Set &temp){
	Set result;
	for(int i=0;i<count;i++){
		result.insert(data[i]);
	}
	for (int j=0;j<temp.getCount();j++){
		result.insert(getData()[j]);
	}
	return result;
}

Set Set::subtraction(Set &temp){
	Set result;
	for(int i=0;i<count;i++){
		result.insert(data[i]);
		/*		for (int j=0;j<temp.getCount();j++){
			if (data[i]==getData[j]){
				result.insert(data[i]);
			}

		}*/
	}
	for(int j=0;j<count;j++){
		for (int k=0;k<temp.getCount();k++){
			if (data[j]==getData()[k]){
				result.del(data[j]);
			}

		}
	}
	return result;
}

int main(){

	Set s1,s2,result;
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);
	s1.insert(5);
	s1.insert(1);
	s1.insert(6);
	s1.insert(7);
	s1.insert(8);
	s1.dump();

	return 0;
}
