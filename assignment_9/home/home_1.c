#include <stdio.h>

//max string size
#define STR_BUFFER_SIZE 256

int doesIncludeAllCharsOf(char *, char *);

int main()
{
	char str1[STR_BUFFER_SIZE];
	char str2[STR_BUFFER_SIZE];
	printf("Enter S2: ");
	gets(str2);
	printf("Enter S1: ");
	gets(str1);
	printf("S2 includes all chars of S1= [%c]", doesIncludeAllCharsOf(str2, str1) ? 'T' : 'F');
	return 0;
}

int doesIncludeAllCharsOf(char *S2, char *S1)
{
	int alphabet_counter[26] = {0};
	for (int i = 0; S2[i] != 0; i++)
		alphabet_counter[S2[i] - 'a']++;
	for (int i = 0; S1[i] != 0; i++)
		if (--alphabet_counter[S1[i] - 'a'] < 0)
			return 0;
	return 1;
}