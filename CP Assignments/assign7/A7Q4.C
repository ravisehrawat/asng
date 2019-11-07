#include<stdio.h>
void main()
{
	int a,b,c,x,y,z;
	printf("Enter the 2 vectors in ai+bj+ck format");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
	int mag=a*x+b*y+c*z;
	printf("\n The dot prod is %d",mag);
	}

