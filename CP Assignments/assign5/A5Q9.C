#include<stdio.h>
void main()
{
	int a=0;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i>2&&i+j>7&&i+j<10+a)
			printf("O");
			else
			printf("*");
		}
		a=a+2;
		printf("\n");
	}
}

