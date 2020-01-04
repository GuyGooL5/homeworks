#include <stdio.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

int isPermutationOf(char *, char *);

int main()
{
	char str1[STR_BUFFER_SIZE];
	char str2[STR_BUFFER_SIZE];
	printf("Enter S2: ");
	gets(str2);
	printf("Enter S1: ");
	gets(str1);
	printf("S1 is permutation of S2 = [%c]", isPermutationOf(str2, str1) ? 'T' : 'F');
	return 0;
}

int isPermutationOf(char *S2, char *S1)
{
	int alphabet_counter[26] = {0};
	if (strlen(S1) != strlen(S2))
		return 0;
	for (int i = 0; S2[i] != 0; i++)
	{
		alphabet_counter[S2[i] - 'a']++;
		alphabet_counter[S1[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++)
		if (alphabet_counter[i] != 0)
			return 0;
	return 1;
}