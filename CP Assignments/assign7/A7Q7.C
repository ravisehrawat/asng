#include<stdio.h>
void main()
{
	int a,b,c,x,y,z;
	printf("Enter the vectors");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
	int i=b*z-c*y;
	int j=x*c-a*z;
	int k=a*y-x*b;
	printf("The vector is %di+%dj+%dk",i,j,k);
	}
