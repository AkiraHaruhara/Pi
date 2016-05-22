/*
pi [iterations]
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sqrt3 = -1;
double mypow(double a, int b)
{
	if (b == 0) return 1;
	double c = a;

	for (int i = 1 ; i < b; i++)
	{
		c *= a;
	}
	return c;
}

double f(double n)
{
	double r;

	r = mypow(sqrt3, (2*n)-1);
	r *= (2*n)-1;
	r = 6 / r;
	r *= pow(-1, n-1);


	return r;
}

int main(int argc, char** args)
{
	sqrt3 = sqrt(3.0f);
	int precision = 7;
	int nums = 64;

	if (argc > 1)
		precision = atoi(args[1]);

	double r = 0;
	for (int i = 1; i < precision; i++)
	{
		r += f(i);
		//printf(">>> %g\r\n", r);
	}
	printf("PI = %.32f\r\n", r);
	return 0;
}
