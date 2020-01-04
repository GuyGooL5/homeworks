#include <stdio.h>

//max string size
#define STR_BUFFER_SIZE 256

void sliceConsecutiveRepeats(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter string: ");
	gets(str);
	sliceConsecutiveRepeats(str);
	printf("string after slicing consecutive reapting chars: %s", str);
	return 0;
}

void sliceConsecutiveRepeats(char *str)
{
	int index = 0;
	for (int i = 0; str[i] != 0; i++, index++)
	{
		str[index] = str[i];
		while (str[i] == str[i+1])
			i++;
	}
	str[index]=0;
}