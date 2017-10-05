#include <math.h>

void power_ref(int* x, int y){
	//create var (double because the function POW from math does not support integers
	double xvalue, yvalue;
	//make the cast from int to double
	xvalue = (double) *x;
	yvalue = (double) y;
	double result = pow (xvalue,yvalue);
	*x = (int) result;
}
