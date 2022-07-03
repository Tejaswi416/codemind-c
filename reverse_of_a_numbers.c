#include<stdio.h>
int main()
{
    int r,n,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
   // if(n<0)
    //printf("-%d",sum);
    //else
    printf("%d",sum);
    return 0;
}