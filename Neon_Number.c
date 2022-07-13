#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,sq,rem;
    scanf("%d",&num);
    sq=num*num;
    while(sq!=0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==num)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}