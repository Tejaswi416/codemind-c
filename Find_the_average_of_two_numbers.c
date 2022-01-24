#include<stdio.h>
int main()
{
	int N1,N2,Tot;
	float Avg;
	scanf("%d %d",&N1,&N2);
	Tot=N1+N2;
	Avg=(float)Tot/2;
	printf("%.4f
",Avg);
	return 0;
}