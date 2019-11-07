#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers a,b,c= ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
	{ 
		printf("b=%d",b);
	}
	if(a>b && b<c)
        {
		if(a>c)
		{
			printf("c=%d",c);
		}
		else if(a<c)
		{
			printf("a=%d",a);
		}
        }

	if(a<b && b>c)
	{
		 if(a>c)
                {
                        printf("a=%d",a);
                }
                else if(a<c)
                {
                        printf("c=%d",c);
                }
        }
	
	if(a<b && b<c)
	{
                printf("b=%d",b);
        }

}
