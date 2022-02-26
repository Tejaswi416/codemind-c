#include<stdio.h>
int main()
{
    int a,s=0,m=1,j;
    scanf("%d",&a);
    while(a!=0)
    {
        j=a%10;
        s+=j;
        m*=j;
        a/=10;
    }
    printf("%d",m-s);
    return 0;
}