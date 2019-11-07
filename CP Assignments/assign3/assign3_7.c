#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c,h,k,R,I1,I2,D;
        printf("Enter the value of a,b,c");
        scanf("%d %d %d",&a,&b,&c);
        D=b*b-4*a*c;
        if(D>=0)
        {
                h=(-b+sqrt(D))/2*a;
                k=(-b-sqrt(D))/2*a;
                printf("\nThe roots of the eqn are x=%d,%d",h,k);
        }
        else
        {
                D=-1*D;
                R=-b/2*a;
                I1=sqrt(D)/2*a;
                I2=-sqrt(D)/2*a;
                printf("\nRoots are imaginary \nThe two roots are (%d+%di),(%d%di)",R,I1,R,I2);
        }
}


