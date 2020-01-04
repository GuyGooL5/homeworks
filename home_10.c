#include <stdio.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

void removeCharsFromString(char *, char *, int);

int main()
{
	char str[STR_BUFFER_SIZE];
	char toRemove[STR_BUFFER_SIZE];
	printf("Enter string: ");
	gets(str);
	printf("Enter chars to remove (no spaces): ");
	gets(toRemove);
	int n = strlen(toRemove);
	removeCharsFromString(str, toRemove, n);
	printf("The string with the chars {%s} removed: %s", toRemove, str);
	return 0;
}

void removeCharsFromString(char *S, char *toRemove, int n)
{
	int alphabet_counter[26] = {0};
	int inc = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		inc = toRemove[i] >= 'a' ? 1 : 2;
		alphabet_counter[(toRemove[i] - 'A') % 32] |= inc;
	}
	for (int i = 0; S[i] != 0; i++, inc = 0)
	{
		inc = S[i] >= 'a' ? 1 : 2;
		if (alphabet_counter[(S[i] - 'A') % 32] & inc)
			continue;
		S[index] = S[i];
		index++;
	}
	S[index] = 0;
}