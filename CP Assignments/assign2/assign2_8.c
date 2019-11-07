#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float A,B;
	printf("Enter the value of length of the sides a, b, c of triangle=");
	scanf("%d %d %d",&a,&b,&c);
	A=acosf((b*b+c*c-a*a)/(2*b*c));
	B=A*180/3.14;
	printf("A(in rad) = %f",A);
	printf("A(in Degree) = %f)",B);
}



