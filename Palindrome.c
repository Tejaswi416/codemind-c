#include<stdio.h>
int main()
{
    int a,j,t,y=0;
    scanf("%d",&a);
    j=a;
    while(a!=0)
    {
        t=a%10;
        y=y*10+t;
        a/=10;
    }
    if(y==j)
    printf("True");
    else
    printf("False");
    return 0;
}
