#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

char *chainStr(char *);
char *chainStrMethod2(char *);
int main()
{
	char str[STR_BUFFER_SIZE];
	printf("Enter string: ");
	gets(str);
	char *chainedStr = chainStrMethod2(str);
	printf("Chained String: %s", chainedStr);
	return 0;
}

char *chainStr(char *S)
{
	int len = strlen(S);
	char *newStr = (char *)malloc((len * 2 + 1) * sizeof(char));
	for (int i = 0; i < len; i++)
		newStr[i] = newStr[len + i] = S[i];
	newStr[len * 2] = 0;
	return newStr;
}

char *chainStrMethod2(char *S)
{
	int len = strlen(S);
	char *newStr = (char *)malloc((len * 2 + 1) * sizeof(char));
	newStr[len * 2 + 1] = 0;
	strcpy(newStr, S);
	strcpy(newStr + len, S);
	return newStr;
}