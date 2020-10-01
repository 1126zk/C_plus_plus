#include "sequence.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string inbuff,where;
	int wh;
	sequence items("test.dat");
	while (true){
		cout << endl<<"Sequence output:"<<endl;
		items.output();
		cout << endl<<"1 -- add"<<endl;
		cout << endl<<"1 -- add"<<endl;
		cout << endl<<"1 -- add"<<endl;
		getline(cin,inbuff);
		if (inbuff == "1"){
			cout << endl<<"item to add:";
			getline(cin,inbuff);
			cout << "add where?";
			getline(cin,where);
			wh = atoi(where.c_str()):
			if (items.addS(wh,inbuff))
				cout << "item add"<<end;
			else
				cout<< "item not added"<<endl;
		}
		else if (inbuff == "2"){
			cout << endl<<"where to delete:";
			getline(cin,where);
			wh = atoi(where.c_str());
			if(items.del(wh))
				cout<<"item deleted"<<endl;
			else
				cout<<"item not deleted"<<endl;
		}
		else if (inbuff=="3")
			break;
	}
	return 0;
}