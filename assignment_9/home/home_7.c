#include <stdio.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

int isEqualIgnoreCase(char *, char *);

int main()
{
	char str1[STR_BUFFER_SIZE];
	char str2[STR_BUFFER_SIZE];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	printf("String 1 equals string 2 ignoring the letters case = [%c]", isEqualIgnoreCase(str1, str2) ? 'T' : 'F');
	return 0;
}

int isEqualIgnoreCase(char *S1, char *S2)
{
	if (strlen(S1) != strlen(S2))
		return 0;
	for (int i = 0; S1[i] != 0; i++)
		if ((S1[i] - 'A') % 32 != (S2[i] - 'A') % 32)
			return 0;
	return 1;
}