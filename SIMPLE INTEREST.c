// simple intrest 
#include<stdio.h>
//#include<conio.h>
int main()
{
	int P,T;
	int R,SI;
	//printf("Enter principle Amount
");
	scanf("%d",&P);
	//printf("Enter TIME in Months
");
	scanf("%d",&T);
	//printf("Enter Rate of Intrest
");
	scanf("%d",&R);
	SI=(P*R*T)/100;
	printf("%d
",SI);
//	getch();
	return 0;
}