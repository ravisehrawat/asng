#include<stdio.h>
void main()
{       int i,z;
	printf("\n");
	for(i=0;i<4;i++)
	{       if(i%2==0)
		{
			 for(z=0;z<10;z++)
			{
				if(z%2==0)
				printf("O");
				else
				printf("*");
				}
				}
		 else
		 {
			for(z=0;z<10;z++)
			{
				if(z%2==0)
				printf("*");
				else
				printf("O");
				}
				}
				printf("\n");
				}

				}




