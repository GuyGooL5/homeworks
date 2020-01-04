#include <stdio.h>

//max string size
#define STR_BUFFER_SIZE 256

void minifyRepeatingCharsToFrequency(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter string: ");
	gets(str);
	minifyRepeatingCharsToFrequency(str);
	printf("minified version with repeating chars as number of occurrences:\n%s", str);
	return 0;
}

void minifyRepeatingCharsToFrequency(char *str)
{
	int index = 0;
	for (int i = 0; str[i] != 0; i++, index++)
	{
		int repeats = 0;
		str[index] = str[i];
		while (str[i] == str[i + 1])
			repeats++, i++;
		if (repeats)
			str[index++ + 1] = repeats + '1';
	}
	str[index] = 0;
}