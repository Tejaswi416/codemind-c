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
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(prime(i)==0)
        {
            if(n%i==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}