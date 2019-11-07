#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	printf("a,b,c,d are all distinct numbers.\n");
	printf("Enter the value of a, b, c, d, x such that only x is equal to one of them=");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	if(x==a)
	{
		printf("x is equal to a");
	}
	else if(x==b)
	{
		printf("x is equal to b");
	}
	 else if(x==c)
        {
                printf("x is equal to c");
        }
	  else if(x==d)
        {
                printf("x is equal to d");

        }
	
}



