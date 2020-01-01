#include <stdio.h>
#include <stdlib.h>

int highestNonExistentElement(int *, int);

int main()
{
	//arbitrary values
	int A[7] = {7, 4, 5, 6, 1, 4, 0};
	printf("highest non existent in A : %d\n", highestNonExistentElement(A, 7));
	return 0;
}

int highestNonExistentElement(int *A, int n)
{
	int *counter = (int *)calloc(n + 1, sizeof(int)), highestNonExistent = -1;
	for (int i = 0; i < n; i++)
		counter[A[i]]++;
	for (int i = 0; i < n + 1; i++)
		if (!counter[i] && i > highestNonExistent)
			highestNonExistent = i;
	free(counter);
	return highestNonExistent;
}