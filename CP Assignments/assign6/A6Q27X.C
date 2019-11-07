#include<stdio.h>
void main()
{
	int x=7;
	for(int i=4;i<=10;i++)
	{
		for(int j=0;j<=x;j++)
		{
			int y=j*i;
			printf("%d,",y);
			}
			printf("\n");
			x-=2;
			}
			}


