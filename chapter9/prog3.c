#include<stdio.h>
#include<stdbool.h>

bool alphabetic(const char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

bool numeric(const char c)
{
	if((c >= '0' && c <= '9'))
		return true;
	else
		return false;
}

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic(const char c);
	bool lookingForNumber = true, alphabetic(const char c);

	for(i = 0;string[i] != '\0'; ++i)
	{
		if(alphabetic(string[i]))
		{
			if(lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

		if(numeric(string[i]))
		{
			if(lookingForNumber)
			{
				++wordCount;
				lookingForNumber = false;
			}
		}
		if(!lookingForNumber && !numeric(string[i]) && string[i] != ',' && string[i] != '.')
			lookingForNumber = true;
	}
	return wordCount;
}

int main(void)
{
	const char text1[] = "Well, 10 here -1 2 1,092,122 goes.";
	const char text2[] = "And here we go 2 times...yeah.";
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
}
