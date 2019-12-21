#include <stdio.h>

int isAscending(int *, int, int *);
int isAscendingRec(int *, int, int *);

int main()
{
	//arbitrary values
	int arr1[5] = {1, 3, 5, 6, 11},
		arr2[5] = {1, 3, 3, 6, 11},
		arr3[5] = {1, 3, 2, 5, 11},
		isVeryAsc1, isVeryAsc2, isVeryAsc3;
	printf("Iterative Function\n");
	printf("[Arr 1] Ascending : %d ", isAscending(arr1, 5, &isVeryAsc1));
	printf("VeryAscending: %d\n", isVeryAsc1);
	printf("[Arr 2] Ascending : %d ", isAscending(arr2, 5, &isVeryAsc2));
	printf("VeryAscending: %d\n", isVeryAsc2);
	printf("[Arr 3] Ascending : %d ", isAscending(arr3, 5, &isVeryAsc3));
	printf("VeryAscending: %d\n", isVeryAsc3);
	printf("Recusive Function\n");
	printf("[Arr 1] Ascending : %d ", isAscendingRec(arr1, 5, &isVeryAsc1));
	printf("VeryAscending: %d\n", isVeryAsc1);
	printf("[Arr 2] Ascending : %d ", isAscendingRec(arr2, 5, &isVeryAsc2));
	printf("VeryAscending: %d\n", isVeryAsc2);
	printf("[Arr 3] Ascending : %d ", isAscendingRec(arr3, 5, &isVeryAsc3));
	printf("VeryAscending: %d\n", isVeryAsc3);
	return 0;
}

int isAscending(int *arr, int n, int *isVeryAscending)
{
	*isVeryAscending = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (*isVeryAscending && arr[i] >= arr[i + 1])
			*isVeryAscending = 0;
		if (arr[i] > arr[i + 1])
			return 0;
	}
	return 1;
}
int isAscendingRec(int *arr, int n, int *isVeryAscending)
{
	if (n <= 2)
	{
		*isVeryAscending = arr[n - 1] > arr[n - 2];
		return arr[n - 1] >= arr[n - 2];
	}
	if (isAscendingRec(arr, n - 1, isVeryAscending))
	{
		if (arr[n - 1] <= arr[n - 2])
			*isVeryAscending = 0;
		return arr[n - 1] >= arr[n - 2];
	}
	return 0;
}