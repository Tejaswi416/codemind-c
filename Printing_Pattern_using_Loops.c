#include<stdio.h>
int main()
{
    int i,j,n,len;
    scanf("%d",&n);
    len=2*n-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            int min= i<j? i:j;
            min=min<len-i? min:len-i-1;
             min=min<len-j? min:len-j-1;
             printf("%d ",n-min);
        }
        printf("
");
    }
    return 0;
}