#include<stdio.h>

void removeString(char text[], int start, int num)
{
	int i;
	for(i = start;text[i + num] != '\0';i++)
	{
		text[i] = text[i + num];
	}

	text[i] = '\0';
}

int main(void)
{
	char text[] = "the wrong son";

	void removeString(char text[], int start, int num);

	removeString(text, 4, 6);

	printf("%s\n", text);

	return 0;
}
