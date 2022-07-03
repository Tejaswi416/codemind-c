#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d%d",&a,&b);
    if(a<b)
    min=a;
    else
    min=b;
    while(1)
    {
        if(a%min==0&&b%min==0)
        {
            printf("%d",min);
            break;
        }
        min--;
    }
    return 0;
}