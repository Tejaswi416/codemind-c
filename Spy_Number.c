#include<stdio.h>
int main()
{
    int n,sum=0,r,mui=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        mui*=r;
        n=n/10;
    }
    if(sum==mui)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
    
}