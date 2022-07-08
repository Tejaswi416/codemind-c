#include<stdio.h>
int main()
{
    int mat[12][12];
    int i,j,row,col,sum=0;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=sum+mat[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}