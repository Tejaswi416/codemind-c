#include<stdio.h>
int main()
{
    int i,n,sum=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    avg=sum/n;
    int fl=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            fl=1;
            break;
        }
    }
    if(fl==1)
    printf("True");
    else
    printf("False");
    return 0;
    
    
}