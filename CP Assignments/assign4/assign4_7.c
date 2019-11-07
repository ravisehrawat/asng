#include<stdio.h>
int main()
{
        int a;
        for(a=2;a%3!=0||a%5!=0;a=a+2)
        {
                printf("number= %d \n",a);
        }
}

