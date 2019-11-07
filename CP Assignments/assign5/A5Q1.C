#include<stdio.h>
void main()
{
     for(int i=0;i<4;i++)
     {
	if(i%2!=0)
	{
		for(int j=0;j<20;j++)
		{
			if(j%2==0)
			printf("*");
			else
			printf("O");
			}
			}
       else
       {
       for(int x=0;x<20;x++)
       printf("*");
       }
       printf("\n");
       }

       }

