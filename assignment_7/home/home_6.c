#include <stdio.h>

void maxmax(int *, int, int *, int *, int *, int *);

int main()
{
	//arbitrary values
	int arr[8] = {1, 2, 7, 5, 9, 5, 6, 3}, odd, even, max_odd, max_even;
	maxmax(arr, 8, &max_even, &even, &max_odd, &odd);
	printf("The array has:\nOdd number [%c] , max odd number: %d\nEven number [%c] , max even number: %d", odd ? 'T' : 'F', max_odd, even ? 'T' : 'F', max_even);
	return 0;
}

void maxmax(int *a, int n, int *max_even, int *even, int *max_odd, int *odd)
{
	*odd = *even = *max_odd = *max_even = 0;
	int i = 0;
	for (i; i < n; i++)
	{
		if (a[i] % 2)
		{
			*odd = 1;
			*max_odd = *max_odd > a[i] ? *max_odd : a[i];
		}
		else
		{
			*even = 1;
			*max_even = *max_even > a[i] ? *max_even : a[i];
		}
	}
}
