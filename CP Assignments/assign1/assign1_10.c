#include<stdio.h>
int main()
{
        int a,b,c,d,e,f;
        printf("Enter a number=");
        scanf("%d",&a);
	b=a%10;
	c=a/10;
	d=c%10;
	f=a/100;
	e=f*100+10*b+d;
	printf("New number is= %d",e);
}

