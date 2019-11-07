#include<stdio.h>
int main()
{
	int a, b, c, p, x, y;
	printf("f(x)=a*x*x+b*x+c");
	printf("\nEnter the value of a,b,c,p=");
	scanf("%d %d %d %d",&a,&b,&c,&p);
	y=a*p*p+b*p+c;
	printf("\nf(%d)= %d*%d*%d+%d*%d+%d",p,a,p,p,b,p,c);
	printf("\nf(%d)= %d",p,y);
}
