#include<stdio.h>
#include<conio.h>
void main()
{
	char x='A';
	int a=1;
	for(int i=0;i<5;i+=1)
	{
		for(int j=0;j<i+a;j++)
		{
			printf("%c",x);
			}
			printf("\n");
		   a=a+i;
		   }
		   getch();
		   }


