#include<stdio.h>
#include<conio.h>
void main()
{               char x='E';
	for(int i=5;i>0;i--)
	{               char y=x;
		for(int j=0;j<i;j++)
		{
			printf("%c",y);
			y--;
			}
			x--;
			printf("\n");
			}
			getch();
			}



