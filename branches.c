#include <stdio.h>
#include "prclib.h"

int main() {

	int num, perc;
	int theOperRes;

	printf("We can figure out percentage of number!\n");
	printf("Enter number and percentage: ");
	scanf("%d""%d", &num, &perc);

	printf("The %d%% from %d is: %d\n", perc, num, theOperRes = per_calc(num, perc) );

 return 0;
}