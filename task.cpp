#include "Task.h"

int main(){
	time_t now = time(0);
	Task t1("Defrost pizzas"),t2("open beer"),t3("Eat pizzas and drink beer");
	t1.setST(now);
	t1.setFT(now+3600);
	t2.setST(t1.getFT());
	t2.setFT(t2.getST() + 2);
	t3.setFT(t2.getFT() + 1);
	t3.setFT(t3.getFT() + 7200);

	return 0;
}
