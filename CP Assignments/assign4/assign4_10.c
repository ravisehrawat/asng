#include<stdio.h>
int main()
{
	int a;
	for(a=5;a<=100;a++)
	{
		if(a%10==5||a%10==6||a%10==7||a%10==8)
		{
			printf("%d\n",a);
		}
	}
}



