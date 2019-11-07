#include<stdio.h>
#include<conio.h>
void main()
{
	char x='A',y;
	for(int i=0;i<6;i++)
	{        y=x;
		for(int j=0;j<i;j++)
		printf(" ");
		for(int z=6;z>i;z--)
		{
			printf("%c",y);
			y++;
			}
			x++;
			printf("\n");
			}
			getch();
			}
