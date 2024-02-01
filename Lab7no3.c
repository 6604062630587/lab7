#include "stdio.h"
void printHead(int w);
void printBody(int w, int h);

void main() {
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}
void printHead(int w)
{
	for (w;w>0;w--) printf("* ");
	printf("\n");
}
void printBody(int w, int h)
{
	int o=w,i;
	for (i =0;i<h-2;i++)
	{
		w=o;
		for (w;w>0;w--)
		{
			if (w==o) printf("* ");
			else if (w==1) printf("* ");
			else printf("  ");
		}
	printf("\n");
	}
}
