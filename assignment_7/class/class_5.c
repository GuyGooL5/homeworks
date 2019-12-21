#include <stdio.h>

void reverseArray(int *, int);
void reverseArrayRec(int *, int);

int main()
{
	//arbitrary values
	int arr1[5] = {1, 3, 2, 5, 6},
		arr2[5] = {1, 3, 2, 5, 6};
	reverseArray(arr1, 5);
	reverseArrayRec(arr2, 5);
	printf("[Iterative] arr1={%d,%d,%d,%d,%d}\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
	printf("[Recursive] arr2={%d,%d,%d,%d,%d}\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
	return 0;
}

void reverseArray(int *arr, int n)
{
	int i = 0;
	for (n--; n >= i; i++, n--)
	{
		if (arr[i] == arr[n])
			continue;
		arr[i] += arr[n];
		arr[n] = arr[i] - arr[n];
		arr[i] -= arr[n];
	}
}
void reverseArrayRec(int *arr, int n)
{
	if (n > 0)
	{
		if (*arr != arr[n - 1])
		{
			*arr += arr[n - 1];
			arr[n - 1] = *arr - arr[n - 1];
			*arr -= arr[n - 1];
		}
		reverseArrayRec(arr + 1, n - 2);
	}
}
