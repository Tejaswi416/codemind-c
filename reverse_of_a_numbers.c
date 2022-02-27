#include<stdio.h>
int main()
{
    int a,n=0,j;
    scanf("%d",&a);
    while(a!=0)
    {
        j=a%10;
        n=n*10+j;
        a/=10;
    }
    printf("%d",n);
    return 0;
}