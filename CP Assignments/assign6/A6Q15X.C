#include<stdio.h>
#include<conio.h>
void main()
{
	char x='A';
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c",x);
			x++;
			}
			x-=i;
			printf("\n");
			}
			getch();
			}

