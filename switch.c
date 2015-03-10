#include <stdio.h>
int main(){
	int train = 65;
	int winning = 0;
	switch(train){

		case 37:
		    winning += 50;
		    break;
		case 65:
		    puts("Jackpot");
		    winning += 80;
		case 12:
		    winning += 20;
		    printf("%i\n", winning);
		    break;
		default:
		    winning=0;
	}
	return 0;
}