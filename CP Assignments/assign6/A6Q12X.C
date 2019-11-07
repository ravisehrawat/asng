#include<stdio.h>
#include<conio.h>
void main()
{
	  for(int i=0;i<6;i++)
	  {     char x='A',y='a';
		char z=x;
		char q=y;
		for(int j=0;j<=i;j++)
		{
		printf("%c",z);
		z++;
		}
		for(int p=5;p>i;p--)
		{
		printf("%c",q);
		q++;
		}
		printf("\n");
		}
		getch();
		}



