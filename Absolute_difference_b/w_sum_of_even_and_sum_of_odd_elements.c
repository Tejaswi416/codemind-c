#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,i,odd=0,even=0,aes;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even=even+arr[i];
        else
        odd=odd+arr[i];
    }
    aes=abs(even-odd);
    printf("%d",aes);
    return 0;
}