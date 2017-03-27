#include<stdio.h>

int findString(char source[], char goal[])
{
	int i = 0, j = 0;

	while(source[i] != '\0')
	{
		j = 0;
		if(source[i] == goal[0])
		{
			while(source[i + j] == goal[j] && goal[j] != '\0')
			{
				j++;
			}

			if(goal[j] == '\0')
			{
				return i;
			}
		}

		i++;
	}

	return -1;
}

void removeString(char text[], int start, int num)
{
	int i;
	for(i = start;text[i + num] != '\0';i++)
	{
		text[i] = text[i + num];
	}

	text[i] = '\0';
}

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

void replaceString(char source[], char s1[], char s2[])
{
    int position, length;


    int findString(char source[], char goal[]);
    void removeString(char text[], int start, int num);
    void insertString(char text[], char addContent[], int position);

    position = findString(source, s1);
    for(length = 0;s1[length] != '\0';length++){}

    removeString(source, position, length);
    insertString(source, s2, position);
}

int main(void)
{
    char text[] = "He is a* good person", s1[] = "*", s2[] = "";

    replaceString(text, s1, s2);

    printf("%s\n", text);
    return 0;
}
