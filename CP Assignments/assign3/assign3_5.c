#include<stdio.h>
int main()
{
	int a,b,c;
	float m;
	printf("Eqn:-  ax+by+c=0");
	printf("\nEnter the value of a, b, c= ");
	scanf("%d %d %d",&a,&b,&c);
	if(b!=0)
	{
		m=-a/b;
		printf("m=%f \nThe line is not vertical",m);
	}
	else
	{
		printf("m=not defined \nThe line is vertical");
	}
}

