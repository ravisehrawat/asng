#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	printf("Enter the vector");
	scanf("%f%f%f",&a,&b,&c);
	float mag=sqrt(a*a+b*b+c*c);
	a=a/mag;
	b=b/mag;
	c=c/mag;
	printf("The unit vector is %fi+%fj+%fk",a,b,c);
	}




