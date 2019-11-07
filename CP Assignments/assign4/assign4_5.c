#include<stdio.h>
int main()
{
        int a;
        for(a=0;a<=100;a++)
        {
		if(a%3==0||a%7==0)
                printf("Even number= %d \n",a);
        }
}

