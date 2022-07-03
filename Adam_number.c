#include<stdio.h>
int main()
{
    int n,r,sum=0,sum1=0,b,s,r1;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    b=sum*sum;
      while(b>0)
    {
        r1=b%10;
        sum1=(sum1*10)+r1;
        b=b/10;
    }
    if(s==sum1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}