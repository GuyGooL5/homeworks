#include <stdio.h>

int palindrome(int *, int);
int palindromeRec(int *, int);

int main()
{
	//arbitrary values
	int arr1[5] = {1, 3, 2, 3, 1},
		arr2[6] = {1, 3, 2, 2, 3, 1},
		arr3[5] = {1, 3, 2, 2, 1};
	printf("Are these arrays palindromes?\n---------------\n");
	printf("Iterative:\nArr1: %d\nArr2: %d\nArr3: %d\n", palindrome(arr1, 5), palindrome(arr2, 6), palindrome(arr3, 5));
	printf("Recursive:\nArr1: %d\nArr2: %d\nArr3: %d\n", palindromeRec(arr1, 5), palindromeRec(arr2, 6), palindromeRec(arr3, 5));
	return 0;
}

int palindrome(int *arr, int n)
{
	int i = 0;
	for (i; i < n; i++)
		if (arr[i] != arr[n - 1 - i])
			return 0;
	return 1;
}

int palindromeRec(int *arr, int n)
{
	if (arr >= arr + n)
		return 1;
	return arr[0] == arr[n - 1] ? palindromeRec(arr + 1, n - 2) : 0;
}