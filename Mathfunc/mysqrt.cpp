#include<iostream>
#include"MathFunc.h"

double mysqrt(double x){
	double result, delta;

	if (x <= 0){
		return 0;
	}
	result = x;
	for (int i = 0; i < 10; ++i){
		if (result <= 0){
			result = 0.1;
		}
		delta = x - (result*result);
		result = result + 0.5*delta / result;
		fprintf(stdout, "Computing sqrt of %g to be %g\n", x, result);

	}

	return result;

}