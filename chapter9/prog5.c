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
}

int main(void)
{
	printf("%i\n", findString("a chatterbox", "hat"));
	
	return 0;
}
