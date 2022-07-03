#include<stdio.h>
int ad(int n){
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum<10){
        return sum;
    }
    else
    return ad(sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ad(n));
    return 0;
}