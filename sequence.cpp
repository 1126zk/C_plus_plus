#include "sequence.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
	string inbuff,where;
	int wh;
	Sequence items("test.dat");
	while (true){
		cout << endl<<"Sequence output:"<<endl;
		items.output();
		cout << endl<<"1 -- add"<<endl;
		cout << endl<<"2 -- del"<<endl;
		cout << endl<<"3 -- quit"<<endl;
	//	getline(cin,inbuff);
		cin>>wh;
		if (wh == 1){
			cout << endl<<"item to add:";
			getline(cin,inbuff);
			cout << "add where?";
			getline(cin,inbuff);
		    cin>>wh;
			if (items.addS(wh,inbuff))
				cout << "item add"<<endl;
			else
				cout<< "item not added"<<endl;
		}
		else if (wh == 2){
			cout << endl<<"where to delete:";
	    	cin>>wh;
			if(items.del(wh))
				cout<<"item deleted"<<endl;
			else
				cout<<"item not deleted"<<endl;
		}
		else if (wh == 3)
			break;
	}
	return 0;
}
