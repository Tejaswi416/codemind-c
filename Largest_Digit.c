#include<stdio.h>
int main()
{
   int num, r, large = 0;
   scanf("%d", &num);
   while (num > 0) 
   {
       r = num % 10;
       if (large < r)
       {
           large = r;
       }
       num = num / 10;
   }
   printf("%d",large);
   return 0;
}