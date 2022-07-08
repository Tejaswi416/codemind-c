#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    int z=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=z;j++)
        {
            printf("%d",abs(j-i));
        }
        z+=2;
        printf("
");
    }
    return 0;
}