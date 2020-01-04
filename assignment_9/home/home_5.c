#include <stdio.h>

//max string size
#define STR_BUFFER_SIZE 256

int isPalindromePermutation(char *);

int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter string: ");
	gets(str);
	printf("The string is a permutation of a palindrome= [%c]", isPalindromePermutation(str) ? 'T' : 'F');
	return 0;
}

int isPalindromePermutation(char *S)
{
	//Assuming input is lowercase chars only (easily can be expanded to uppercase and special chars as well)
	int alphabet_counter[26] = {0};
	int exclusive_one_flag = 0;
	for (int i = 0; S[i] != 0; i++)
		alphabet_counter[S[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		if (alphabet_counter[i] % 2)
		{
			if (exclusive_one_flag)
				return 0;
			exclusive_one_flag = 1;
		}
	return 1;
}
