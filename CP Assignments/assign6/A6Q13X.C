#include<stdio.h>
#include<conio.h>
void main()
{         char y='B';
	  for(int i=0;i<5;i++)
	  {
		char x='a';
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
		       ++y;
			printf("\n");
			}
			getch();
			}

