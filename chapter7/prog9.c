#include<stdio.h>

int gcd(int u, int v)
{
	int temp;

	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int lcm(int u, int v)
{
	int gcd(int u, int v);

	return u * v / gcd(u, v);
}

int main(void)
{
	printf("%i\n", lcm(15, 10));
}
