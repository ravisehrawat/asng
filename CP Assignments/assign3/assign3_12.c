#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,q,r,i,l,D,A;
	printf("Line: ax+by+c=0  centre of circle=(p,q)  Radius of circle=r");
	printf("\nEnter the value of a,b,c,p,q,r");
	scanf("%d %d %d %d %d %d",&p,&q,&r,&a,&b,&c);
	i=(a*p+b*q+c)*(a*p+b*q+c)/(a*a+b*b);
	D=sqrt(i);
	if(D<r)
	{
		l=sqrt(r*r-i);
		A=l*D;
		printf("\nArea of Triangle = %d",A);
	}
	else
	{
		printf("\nThe line does not intersect the circle");
	}
}
