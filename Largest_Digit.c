#include<stdio.h>
int main()
{
    int a,n,j,k=0;
    scanf("%d",&a);
    while(a!=0)
    {
        j=a%10;
        if(j>k)
        {k=j;}
        a/=10;
    }
    printf("%d",k);
    return 0;
}