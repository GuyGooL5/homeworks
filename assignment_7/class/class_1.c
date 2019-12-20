#include <stdio.h>
#define SIZE 5
void inputArray(int*,int);
void printArray(int*,int);

int main()
{
    int arr[SIZE];
    printf("Please enter %d values\n",SIZE);
    inputArray(arr,SIZE);
    printArray(arr,SIZE);

    return 0;
}

void inputArray(int *arr,int n){
    int i=0;
    for(i;i<n;i++)
        scanf("%d",arr+i);
}

void printArray(int *arr,int n){
    int i=0;
    for(i;i<n;i++)
        printf("arr[%d]= %d\n",i,*(arr+i));
}
