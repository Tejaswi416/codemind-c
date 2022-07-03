#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp,i;
    scanf("%d",&n);
    temp=n;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem;
            temp=temp/10;
        }
        temp=sum;
        
    }
    if(sum==1)
    printf("True");
    else
    printf("False");
    return 0;
}