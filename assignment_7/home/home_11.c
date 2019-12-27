#include <stdio.h>

int isSuperAscending(int *, int);
int isSuperAscendingRec(int *, int);
int main()
{
	//arbitrary values
	int arr1[6] = {1, 2, 5, 9, 20, 40},
		arr2[6] = {1, 2, 5, 7, 20, 40};
	printf("[Iterative]\n");
	printf("arr1 is super ascending? %c\n", isSuperAscending(arr1, 6) ? 'T' : 'F');
	printf("arr2 is super ascending? %c\n", isSuperAscending(arr2, 6) ? 'T' : 'F');
	printf("[Recursive]\n");
	printf("arr1 is super ascending? %c\n", isSuperAscendingRec(arr1, 6) ? 'T' : 'F');
	printf("arr2 is super ascending? %c\n", isSuperAscendingRec(arr2, 6) ? 'T' : 'F');
	return 0;
}

int isSuperAscending(int *arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (sum >= arr[i])
			return 0;
		sum += arr[i];
	}
	return 1;
}
int isSuperAscendingRec(int *arr, int n)
{
	if (n <= 1)
		return 1;
	if (arr[1] <= arr[0])
		return 0;
	arr[1] += arr[0];
	return isSuperAscendingRec(arr + 1, n - 1);
}