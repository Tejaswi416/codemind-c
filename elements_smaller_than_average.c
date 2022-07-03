#include<stdio.h>
int main()
{
    int count=0,n;
    scanf("%d",&n);
    int i,a[n],sum=0,avg;
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
        if(a[i]<=avg)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}