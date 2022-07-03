#include<stdio.h>
int main()
{
    int n1,n2,i,c=0;
    scanf("%d",&n1);
    int arr[n1];
    
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
    {
        if(arr[i]==n2)
        c++;
    }
    printf("%d",c);
    return 0;
}