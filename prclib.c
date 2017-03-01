#include <stdio.h>

int per_calc(int num_forCalc, int perc_forCalc) {
	int resOfOperat;
	resOfOperat = (num_forCalc * perc_forCalc) / 100;

	return resOfOperat;
}

int per_ofSum(int frsNum, int sndNum, int perAmount_forCalc) {
	int outRes;
	outRes = ( (frsNum + sndNum) * perAmount_forCalc) / 100;

	return outRes;
}