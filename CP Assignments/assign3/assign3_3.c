#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers=");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("(%d ,%d)",a,b);
	}
	else
	{
		printf("(%d ,%d)",b,a);
	}
}
