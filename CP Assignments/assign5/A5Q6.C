#include<stdio.h>
void main()
{
		for(int i=0;i<4;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<20;j++)
				{
					if(j%5==0)
					printf("O");
					else
					printf("*");

				 }
			}
			else
			{
				for(int j=0;j<20;j++)
				{
					if(j%5==0)
					printf("*");
					else
					printf("O");

				}
			}
			printf("\n");
		}
}

