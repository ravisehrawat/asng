#include<stdio.h>
int main()
{
	int a,b,c;          //Code to print the bigest number from the three
	printf("Enter any three numbers=");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is the biggest");
	}
	else if(a<b&&b>c)
	{
		printf("b is the biggest");
	}
	else
	{
		printf("c is the biggest");
	}
}

	
