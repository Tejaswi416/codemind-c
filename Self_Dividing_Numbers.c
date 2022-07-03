#include<stdio.h>
int selfdivid(int n)
{
    int i=n,dig=0;
    if(n%10==0)
    {
        return 0;
    }
    while(n!=0)
    {
        dig=n%10;
        if(i%dig!=0)
        {
            return 0;
            break;
        }
        n/=10;
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int n=a;n<=b;n++)
    {
        if(selfdivid(n))
        {
            printf("%d ",n);
        }
    }
}