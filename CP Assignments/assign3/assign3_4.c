#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter the three sides a,b,c of the triangle=");
        scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c)
	{
		printf("Angle A is 90 degree");
	}
	else
	{
		printf("Angle A is not 90 degree");
	}
}

