#include<stdio.h>
int is_prime(int n)
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
    int n,i,count=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i)==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}