#include<stdio.h>
int main()
{
	int a;
	for(a=0;a<=100;a++)
	{
		if(a<20||a>50&&a<70||a>90)
		{
			printf("%d\n",a);
		}
	}
}
