#include<stdio.h>
#include<conio.h>
void main()
{       int q=1;
	for(int i=5;i>=0;i--)
	{
		char x='A';
		for(int j=0;j<=i;j++)
		{
			printf("%c",x);
			x+=q;
			}
			q++;
			printf("\n");
			}
			getch();
			}


