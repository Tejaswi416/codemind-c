#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       count++;
    }
    if(count==2)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    {
        int r=0,flag=0;
        while(n!=0)
        {
            r=n%10;
            if(prime(r)==0){
                flag=1;
                break;
            }
            n/=10;
        }
        if (flag==1){
            printf("Not Mega Prime");
        }
        else
        printf("Mega Prime");
    }
    else{
          printf("Not Mega Prime");
    }
     return 0;
}