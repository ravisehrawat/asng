#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<=100;a++)
	{
		b=a%10;
		if(b%3==0)
		{
			printf("%d\n",a);
		}
	}
}
