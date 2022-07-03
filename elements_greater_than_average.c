#include<stdio.h>
int main()
{
    int n,avg,sum=0,count=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}