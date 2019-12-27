#include <stdio.h>

double arrAvgRec(int *, int);
int main()
{
	//arbitrary values
	int arr[5] = {1, 3, 5, 2, 4} ;
	printf("array avarage is: %lf", arrAvgRec(arr, 5));
	return 0;
}

double arrAvgRec(int *arr, int n)
{
	if (arr >= arr + n)
		return *arr;
	return (*arr + arrAvgRec(arr + 1, n - 1) * (n - 1)) / n;
}
