#include<stdio.h>
void main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if((i+j<6||j>10)&&i<8)
			{
				printf("O");
			}
			else
			printf("*");
			if(i>7)
			{

				printf("*");
			}
			}
			printf("\n");
			}
			}

