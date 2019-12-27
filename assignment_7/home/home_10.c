#include <stdio.h>

int isArrAscDesRec(double *, int);
int main()
{
	//arbitrary values
	double arr1[4] = {1.7, 2.65, 2.5, 4.1},
		   arr2[4] = {1.7, 2.65, 2.7, 4.1};
	printf("arr1 is good? %c\n",isArrAscDesRec(arr1,4)?'T':'F');
	printf("arr2 is good? %c\n",isArrAscDesRec(arr2,4)?'T':'F');
	return 0;
}

int isArrAscDesRec(double *arr, int n)
{
	if (n <= 1)
		return 1;
	if (isArrAscDesRec(arr + 1, n - 1))
		return (int)arr[0] <= (int)arr[1] && (arr[0] - (int)arr[0]) >= (arr[1] - (int)arr[1]);
	return 0;
}