#include<stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
		x = -x;
	return x;
}

float squareRoot(float x)
{
	const float epsilon = 0.00001;
	float guess = 1.0;

	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

int main(void)
{
	float a, b, c;
	float absoluteValue(float x);
	float squareRoot(float x);

	printf("Please enter a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);

	if((b *b - 4 * a * c) < 0)
	{
		printf("The roots are imaginary number.\n");
		return 1;
	}

	printf("The roots are %f and %f\n", ((-b + squareRoot(b * b - 4 * a * c)) / (2 * a)), ((-b - squareRoot(b * b - 4 * a * c)) / (2 * a)));

	return 0;
}
