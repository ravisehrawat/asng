#include<stdio.h>
int main()
{
	int a;
	printf("Odd numbers\n");
	for(a=1;a<100;a=a+2)
	{
		if((a/10)%2==0)
		{
			printf("A=%d\n",a);
		}
	}
	printf("\nEven numbers\n");
	for(a=0;a<100;a=a+2)
        {
                if((a/10)%2==1)
                {
                        printf("B=%d\n",a);
                }
        }
}
