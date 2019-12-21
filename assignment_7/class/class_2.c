#include <stdio.h>

void arrCalc (int *, int, int *, int *, int *, double*, int *);

int main ()
{
	//arbitrary values
    int arr[10]={2,29,13,24,57,890,12,31,11,8,403},
        max,min,sum,isEven;
    double avg;
    arrCalc(arr,10,&max,&min,&sum,&avg,&isEven);
    printf("Array data:\nMin: %d\nMax: %d\nSum: %d\nAvarage: %lf\nIs Even: %d",min,max,sum,avg,isEven);
    return 0;
}

void arrCalc (int *arr, int n, int *max, int *min, int *sum, double *avg, int *isEven)
{
    int i=0;
    *max=*min=*sum=*isEven=0;
    for(i;i<n;i++){
        if(arr[i]%2==0)
            *isEven=1;
        *sum+=arr[i];
        *max=*max>arr[i]?*max:arr[i];
        *min=*min<arr[i]?*min:arr[i];
    }
    *avg=*sum/n;
}
