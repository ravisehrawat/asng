#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("Enter the coordinates");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	float x,y;
	x=(a+c)/2;
	y=(b+d)/2;
	printf("\n (%f,%f)",x,y);
	}
