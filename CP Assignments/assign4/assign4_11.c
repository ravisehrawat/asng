#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=0;a<100;a++)
	{
		b=a%10;
		c=a/10;
		d=b+c;
		if(d%7==0)
		{
			printf("%d\n",a);
		}
	}
}

