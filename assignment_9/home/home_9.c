#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//max string size
#define STR_BUFFER_SIZE 256

typedef char *verylong;

verylong add_verylong(verylong, verylong);

int main()
{
	char str1[STR_BUFFER_SIZE];
	char str2[STR_BUFFER_SIZE];
	printf("Enter Very long 1: ");
	gets(str1);
	printf("Enter Very long 2: ");
	gets(str2);
	verylong vl1 = str1;
	verylong vl2 = str2;
	verylong vl_sum = add_verylong(vl1, vl2);
	printf(" %s + %s = %s", vl1, vl2, vl_sum);

	return 0;
}

verylong add_verylong(verylong vl1, verylong vl2)
{
	int vl1_len = strlen(vl1), vl2_len = strlen(vl2);
	int longest_len = vl1_len > vl2_len ? vl1_len : vl2_len;
	int vl1_index = vl1_len - 1, vl2_index = vl2_len - 1;
	int longest_index = longest_len - 1;
	verylong newVl = (verylong)malloc((longest_len + 1) * sizeof(char));
	int sum = 0, carry = 0;
	for (; longest_index >= 0; longest_index--, vl1_index--, vl2_index--)
	{
		sum = 0;
		sum += carry;
		sum += vl2_index >= 0 ? vl2[vl2_index] - '0' : 0;
		sum += vl1_index >= 0 ? vl1[vl1_index] - '0' : 0;
		carry = sum > 9 ? 1 : 0;
		newVl[longest_index] = sum % 10 + '0';
	}
	if (carry)
	{
		newVl = realloc(newVl, (longest_len + 2) * sizeof(char));
		for (int i = longest_len + 2; i > 0; i--)
			newVl[i] = newVl[i - 1];
		newVl[0] = '1';
		return newVl;
	}
	newVl[longest_len] = 0;
	return newVl;
}