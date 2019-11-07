#include<stdio.h>
int main()
{
        int a;
        for(a=10;a<=100;a++)
        {
                if((a/10)%3==1)
                {
                        printf("%d\n",a);
                }
        }
}

