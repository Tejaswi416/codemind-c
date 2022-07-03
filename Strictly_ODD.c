#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]%2!=0 && i%2==0)
        {
            printf("False");
            break;
        }
        else
        {
            c=1;
        }
    }
    if(c>0)
    {
        printf("True");
    }
}