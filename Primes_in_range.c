#include<stdio.h>
#include<math.h>
int isprime(int i)
{
    if(i==1)
    return 0;
    if(i==2)
    return 1;
    int j;
for(j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
  return 0;
}
}
return 1;

}
int main()
{
int n1,n2,i,j,c=0;
scanf("%d",&n1);
scanf("%d",&n2);
for(i=n1;i<=n2;i++)
{
  if(isprime(i)){
   c++;
 }
}
printf("%d",c);
return 0;
}
