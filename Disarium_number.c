#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,c=0;
    scanf("%d",&num);
     num1=num;
    while(num1!=0)
    {
        num1/=10;
        c++;
    }
    num1=num;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,c);
        num1/=10;
        c--;
    }
    if(sum==num)
    printf("True");
    else
    printf("False");
}

