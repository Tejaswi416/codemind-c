#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=a+b;
    scanf("%d",&n);
    if(n==a||n==b)
    printf("True");
    else{
        while(1)
            {
                if(c==n){
                    printf("True");
                    break;
                }else if(c>n){
                printf("False");
                break;
                }
                c=a+b;
                a=b;
                b=c;
            }
    }
    return 0;
}