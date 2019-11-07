#include<stdio.h>
#include<conio.h>
void main()
{
	char c='F';
	for(int i=6;i>0;i--)
	{       char x=c;
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int z=6;z>=i;z++)
		{
			printf("%c",x);
			x++;
		}
		c=c--;
		printf("\n");
		}
		getch();
		}



