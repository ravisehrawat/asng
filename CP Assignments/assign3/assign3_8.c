#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers a, b, c such that any two of them must be same");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b)
	{
		printf("%d",c);
	}
	else if(a==c)
	{
		printf("%d",b);
	}
	else if(b==c)
	{
		printf("%d",a);
	}
	else if(a!=b && b!=c && c!=a)
	{
		printf("!!Error!!");
	}
}
