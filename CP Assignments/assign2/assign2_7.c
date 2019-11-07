#include<stdio.h>
int main()
{
	int a,b,c,p,q,r,x,y;
	printf("Let the two eqn be ax+by+c=0 ; px+qy+r=0");
	printf("\nEnter the value of a,b,c,p,q,r= ");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&p,&q,&r);
	x=(b*r-c*q)/(a*q-b*p);
	y=(a*r-c*p)/(p*b-a*q);
	printf("\nPoint of intersection of the two lines is (%d,%d)",x,y);
}
