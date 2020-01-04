#include <stdio.h>
#include <ctype.h>
//max string size
#define STR_BUFFER_SIZE 256

void deleteSpaces(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter Sentence: ");
	gets(str);
	deleteSpaces(str);
	printf("Sentence without spaces: %s", str);
	return 0;
}

void deleteSpaces(char *str)
{
	int index = 0;
	for (int i = 0; str[i] != 0; i++, index++)
	{
		while (isspace(str[i]))
			i++;
		str[index] = str[i];
	}
	str[index] = 0;
}