#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int arr[1000],n,i,even=0,odd=0,abf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        even=even+arr[i];
        else
        odd=odd+arr[i];
    }
    abf=(even-odd);//abs is function
    printf("%d",abf);
    return 0;
}