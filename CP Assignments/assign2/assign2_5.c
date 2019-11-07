#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,q;
	float D;/*In this program we will find the distance between between a given point                   and a given line*/
	printf("The given eqn is cx+dy+e=0 and the given point is (a,b)");
	printf("\nEnter the value of a,b,c,d,e");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	q=sqrt(c*c+d*d);
	D=(a*c+b*d+e)/q;
	printf("\nDistance= %f",D);
}
