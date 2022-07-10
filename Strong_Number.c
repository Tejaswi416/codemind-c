#include <stdio.h>
int fac(int n){
    int fact=1,i;
    for (i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main() {
    int n, i,fact = 1,sum=0,r=0,temp;
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+fac(r);
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
    return 0;
}
