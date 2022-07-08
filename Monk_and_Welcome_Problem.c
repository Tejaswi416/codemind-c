#include<stdio.h>
int main()
{
    int a[30],b[30],c[30],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
        c[j]=a[j]+b[j];
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",c[j]);
    }
}