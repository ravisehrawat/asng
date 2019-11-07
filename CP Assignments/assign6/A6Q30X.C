#include<stdio.h>
void main()
{
	int a,b;
	for(int i=0;i<6;i++)
	{
		a=5;
		b=3;
		int c=a+b;
		printf("%d %d ",a,b);
		for(int j=0;j<i;j++)
		{       c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		 }
		 printf("\n");
		 }
		 }

