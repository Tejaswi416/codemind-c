#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=sum/n;
    printf("%0.2f",avg);
    return 0;
    
}