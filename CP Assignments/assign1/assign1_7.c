#include<stdio.h>
int main()
{
        int a,b,c,d;
	printf("Enter a number=");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	c=c%10;
	d=b+c;
	printf("sum of last two digits= %d",d);
}


