#include<stdio.h>
int prime(int n)
{
    int i=1,count=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;             
    }
}
int main()
{
    int n,n1,rem,rev=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(prime(n1))
    {
        if(prime(rev))
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
}