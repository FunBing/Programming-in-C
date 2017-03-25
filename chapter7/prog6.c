#include<stdio.h>

double absoluteValue(double x)
{
	if(x < 0)
		x = -x;
	return x;
}

double squareRoot(double x)
{
	const double epsilon = .00000001;
	double guess = 1.0;

	while(absoluteValue(absoluteValue(guess * guess / x) - 1) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

int main(void)
{
	printf("squareRoot (2.0) = %.9f\n", squareRoot(2.0));
	printf("squareRoot (144.0) = %.9f\n", squareRoot(144.0));
	printf("squareRoot (17.5) = %.9f\n", squareRoot(17.5));

	return 0;
}
