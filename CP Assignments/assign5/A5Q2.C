#include<stdio.h>
void main()
{
	for(int i=0;i<10;i++)
	{
		if(i<3)
		{
			for(int x=0;x<20;x++)
			{
				if(x<8)
				printf("O");
				else
				printf("*");
				}
				}
		  else if(i>=7)
		  {
			for(int y=0;y<20;y++)
			{
				if(y>14)
				printf("O");
				else
				printf("*");
				}
				}
		  else
		  {
			for(int z=0;z<20;z++)
			printf("*");
			}
			printf("\n");
			}

			}
