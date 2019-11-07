#include<stdio.h>
int main()
{
        int a,b;
	printf("Enter a number=");
	scanf("%d",&a);
	b=a/10;
	a=b%10;
	printf("Last digit= %d",a);
}
