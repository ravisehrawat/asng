#include<stdio.h>
#include<conio.h>
void main()
{       char x='A';
	int y=1;
	for(int i=0;i<16;i+=y)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c",x);
			}
			y++;
			printf("\n");
			}
			getch();
			}
