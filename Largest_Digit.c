#include<stdio.h>
int main()
{
    int n,r,large=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(large<r)
        {
            large=r;
        }
        n=n/10;
    }
    printf("%d",large);
    return 0;
}