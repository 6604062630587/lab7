#include "stdio.h"
long convert(long h, long m, long s) ;

void main ()
{
	int a,b,c,sum;
	scanf("%d %d %d",&a,&b,&c);
	sum = convert(a,b,c);
	printf("%d",sum);
}

long convert(long h, long m, long s)
{
	m=m+h*60;
	s=s+m*60;
	return s;
}
