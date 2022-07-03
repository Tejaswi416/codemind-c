#include<stdio.h>
int main()
{
    int a[1000],n,i,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+a[i];
        }
         
    }
    printf("%d",even);
    return 0;
}