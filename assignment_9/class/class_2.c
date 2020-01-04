#include <stdio.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

char mostFrequentLetter(char *, int *);

int main()
{
	char str[STR_BUFFER_SIZE];
	int occourrences;
	printf("Enter string: ");
	gets(str);
	printf("Most frequent letter appeared %d times and it is [%c]", occourrences, mostFrequentLetter(str, &occourrences));
	return 0;
}

char mostFrequentLetter(char *S, int *occourrences)
{
	int counter[26] = {0};
	int max = 0;
	*occourrences = -1;
	for (int i = 0; S[i] != 0; i++)
		if (!(S[i] == ' ' || S[i] == '\n' || S[i] == '\t'))
			counter[S[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		if (counter[i] > *occourrences)
		{
			*occourrences = counter[i];
			max = i;
		}
	return max + 'a';
}