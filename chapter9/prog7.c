#include<stdio.h>

void insertString(char text[], char addContent[], int position)
{
	int i, j;
	char temp[80];
	for(i = position;text[i] != '\0';i++)
	{
		temp[i - position] = text[i];
	}
	temp[i - position] = '\0';

	for(i = position;addContent[i - position] != '\0';i++)
	{
		text[i] = addContent[i - position];
	}

	for(j = 0;temp[j] != '\0';j++)
	{
		text[i++] = temp[j];
	}
	text[i] = '\0';
}

int main(void)
{
	char text[] = "the wrong son";

	void insertString(char text[], char addContent[], int position);

	insertString(text, "per", 10);


	printf("%s\n", text);

	return 0;
}
