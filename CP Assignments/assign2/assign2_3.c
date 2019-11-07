#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float A;          /*(a,b),(c,d),(e,f) are the cordinates of the vertices
			 A is the area of the triangle formed by the three coordinates*/ 
	printf("Enter the corodinates a,b,c,d,e,f of the three points=");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	A=0.5*(a*(d-f)-c*(f-b)+e*(b-d));
	if(A>0)
	{
		printf("Area of triangle =%f",A);
	}
	else 
	{
		if(A<0)
		{
			A=-1*A;
			printf("Area of triangle =%f",A);
		}
		else if(A=0)
		{ 
			printf("The given points are co-linear");
		}
	}
}

