#include <stdio.h>
#include <stdlib.h>

int *vector3dMult(int *, int *);
//Just for printing the new array.
void printArray(int *arr, int n)
{
	int i = 0;
	printf("{");
	for (i; i < n - 1; i++)
		printf("%d,", arr[i]);
	printf("%d", arr[i]);
	printf("}");
}
int main()
{
	int vec1[3] = {1, 2, 1},
		vec2[3] = {3, 3, 3};
	int *vec3 = vector3dMult(vec1, vec2);
	printArray(vec1, 3);
	printf(" * ");
	printArray(vec2, 3);
	printf(" = ");
	printArray(vec3, 3);
	return 0;
}

int *vector3dMult(int *vec1, int *vec2)
{
	int *vec3 = (int *)malloc(3 * sizeof(int));
	vec3[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
	vec3[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
	vec3[2] = vec1[0] * vec2[1] - vec1[1] * vec2[0];

	return vec3;
}