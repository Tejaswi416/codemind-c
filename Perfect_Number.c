#include<stdio.h>
int main(){
   int num,i,res=0;
   scanf("%d",&num);
   for(i=1;i<=num;i++){
      if(num%i==0)
         res=res+i;
   }
   if(res==2*num) 
      printf("True");
   else
      printf("False");
      return 0;
}