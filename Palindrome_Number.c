#include<stdio.h>
int ispalin(int);
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(ispalin(arr[i])){
        printf("True
");
        }else
        printf("False
");
    }
    return 0;
}
int ispalin(int n){
    int temp,rem,sum=0;
temp=n;
    while(n>0)
    {
     rem=n%10;
     sum=(sum*10)+rem;
     n=n/10;
    }
    if(temp==sum)
    return 1;
    else
   return 0;
    
}