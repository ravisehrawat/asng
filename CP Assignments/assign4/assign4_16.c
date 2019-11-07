#include<stdio.h>
int main()
{
        int a;
        printf("Even numbers\n");
        for(a=0;a<100;a=a+2)
	{
		if((a/10)%3!=0)
			printf("%d\n",a);
	}
}
