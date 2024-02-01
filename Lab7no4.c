#include "stdio.h"
int checkNumber(int n1, int n2); 
int multiply(int n1, int n2);

void main ()
{
	int x,sum,y;
	scanf("%d %d",&x,&y);
	if (checkNumber (x,y)) sum=multiply (x,y);
	printf("%d",sum);
}

int checkNumber(int n1, int n2)
{
	if (n1<60 && n1>20 && n2 < 60 &&n2 > 20 ) return 1;
	else return 0;
}

int multiply(int n1, int n2)
{
	return n1*n2;
}
