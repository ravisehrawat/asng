#include<stdio.h>
int main()
{
        int a;
        for(a=3;a<=100;a++)
        {
		if((a%3==0||a%5==0)&&a%15!=0)
                printf("number= %d \n",a);
        }
}

