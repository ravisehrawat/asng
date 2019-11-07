#include<stdio.h>
int main()
{
        int a,b,c,d;          //Code to print the bigest number from the four
	printf("Enter any four numbers=");
        scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>b&&a>d)
		{
			printf("a");
		}
		else if(a<c&&c>d)
			{
				printf("c");
			}
			else
			{
				printf("d");
			}
	}
	else if(a<b)
	{
		if(b>c&&b>d)
		{
			printf("b");
		}
		else if(b<c&&c>d)
		{
			printf("c");
		}
		else
		{
			printf("d");
		}
	}
}


