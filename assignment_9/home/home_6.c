#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

char *excludeToMakePalindrome(char *, int *);

void printCharArray(char *arr, int n)
{
	if (n == 0)
	{
		printf("{}");
		return;
	}
	int i = 0;
	printf("{");
	for (; i < n - 1; i++)
		printf("%c,", arr[i]);
	printf("%c}", arr[i]);
}

int main()
{
	char str[STR_BUFFER_SIZE];
	int exclusionArrSize;
	printf("Enter string: ");
	gets(str);
	char *exclusionArr = excludeToMakePalindrome(str, &exclusionArrSize);
	printf("The array of chars to exclude has a size of %d and it is:", exclusionArrSize);
	printCharArray(exclusionArr, exclusionArrSize);
	return 0;
}

char *excludeToMakePalindrome(char *S, int *excludeSize)
{
	*excludeSize = 0;
	int alphabet_counter[26] = {0};
	int str_size = strlen(S);
	int exclusive_one_flag = 0;
	char *exclusionArr = (char *)malloc(str_size * sizeof(char));
	for (int i = 0; i < str_size; i++)
		alphabet_counter[S[i] - 'a']++;
	for (int i = 0; i < str_size; i++)
	{
		if (alphabet_counter[S[i] - 'a'] % 2)
			if (exclusive_one_flag)
				exclusionArr[(*excludeSize)++] = S[i];
			else
				exclusive_one_flag = 1;
		alphabet_counter[S[i] - 'a'] = 0;
	}
	return (char *)realloc(exclusionArr, *excludeSize * sizeof(char));
}
