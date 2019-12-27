#include <stdio.h>

int highestCoupleSum(int *arr, int n);

int main()
{
	//arbitrary values
	int arr1[9] = {3, 8, 10, 5, -7, 7, 9, -2, 13},
		arr2[9] = {3, 8, 12, 5, -7, 11, 9, 2, 13};
	printf("[Arr 1] max couple sum : %d\n", highestCoupleSum(arr1, 9));
	printf("[Arr 2] max couple sum : %d\n", highestCoupleSum(arr2, 9));
	return 0;
}

int highestCoupleSum(int *arr, int n)
{
	int i = 0, max_sum = 0;
	for (i; i < n - 1; i++)
		max_sum = max_sum > (arr[i] + arr[i + 1]) ? max_sum : arr[i] + arr[i + 1];
	return max_sum;
}
