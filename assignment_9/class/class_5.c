#include <stdio.h>
#include <string.h>
//max string size
#define STR_BUFFER_SIZE 256

int isPalindrome(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter Sentence: ");
	gets(str);
	printf("The string is palindrome = [%c]", isPalindrome(str) ? 'T' : 'F');
	return 0;
}

int isPalindrome(char *S)
{
	int len = strlen(S);
	for (int i = 0; i < len; i++)
		if (S[i] != S[len - 1 - i])
			return 0;
	return 1;
}