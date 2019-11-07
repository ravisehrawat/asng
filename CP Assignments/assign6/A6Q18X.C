#include<stdio.h>
#include<conio.h>
void main()
{
		char c='A';
		for(int i=5;i>0;i--)
		{       int n=0;
			for(int j=1;j<i;j++)
			{
				printf(" ");
			}
			for(int z=5;z<=i;z--)
			{
				printf("%c",c);
				c++;
				n++;
			}
			c=c-1;
			for(int a=1;a<n;a++)
			{
			     c--;
			     printf("%c",c);
			}
		       c='A';
		       printf("\n");
		       }
		       getch();
		       }

