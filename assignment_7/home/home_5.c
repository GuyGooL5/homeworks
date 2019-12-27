#include <stdio.h>

int hasSumSmallerThanKey(int *, int, int, int *, int *);

int main()
{
	//arbitrary values
	int arr[5] = {1, 6, 2, 4, 3}, key, a, b, output;
	printf("Enter a key: ");
	scanf("%d", &key);
	output = hasSumSmallerThanKey(arr, 5, key, &a, &b);
	printf("For key %d the array has smaller sum: %c, with values :[%d,%d] ", key, output ? 'T' : 'F', a, b);
	return 0;
}

int hasSumSmallerThanKey(int *arr, int n, int key, int *a, int *b)
{
	*a = *b = -1;
	int i = 0;
	int min_a, min_b;
	min_a = min_b = ~(1 << sizeof(int) * 8 - 1); //INT_MAX
	for (i; i < n; i++)
	{
		if (arr[i] < min_b)
		{
			if (arr[i] < min_a)
			{
				min_b = min_a;
				min_a = arr[i];
			}
			else
				min_b = arr[i];
			if (min_b != ~(1 << sizeof(int) * 8 - 1) && min_a + min_b < key)
			{
				*a = min_a;
				*b = min_b;
				return 1;
			}
		}
	}
	return 0;
}
