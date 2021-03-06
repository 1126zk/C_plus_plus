#include <iostream>
#include "file.h"
using namespace std;
int main(){
	Film f;
	f.store_title("Rear Window");
	f.store_director("Alfred Hitchcock");
	f.store_time(112);
	f.store_quality(4);
	cout << "File--" <<endl;
	f.output();
	cout <<endl;

	DirectorCut d;
	d.store_title("Jail Bait");
	d.store_director("Ed Wood");
	d.store_time(70);
	d.store_quality(2);
	d.store_rev_time(72);
	d.store_changes("Extra footage not in original included");
	cout << "Director--" <<endl;
	d.output();
	cout <<endl;

	ForeignFilm ff;
	ff.store_title("Jules and Jim");
	ff.store_director("Francois Truffaut");
	ff.store_time(104);
	ff.store_quality(4);
	ff.store_language("French");
	cout << "ForeignFilm--" <<endl;
	ff.output();
	cout <<endl;
}
