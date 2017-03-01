#include <stdio.h>
#include "prclib.h"

int main() {

	int num, perc;
	int theOperRes;

	int frsNum_user, sndNum_user;
	int outRes_user;

	printf("We can figure out percentage of number!\n");
	printf("Enter number and percentage: ");
	scanf("%d""%d", &num, &perc);

	printf("The %d%% from %d is: %d\n", perc, num, theOperRes = per_calc(num, perc) );

	printf("We can also count percentage from sum!\n");
	printf("Enter two numbers and percentage: ");
	scanf("%d""%d""%d", &frsNum_user, &sndNum_user, &outRes_user);

 return 0;
}