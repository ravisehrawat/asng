#include<stdio.h>
#include<math.h>
int main()
{
	int h,k,r,s,D,x,a,l;
	printf("(h,k) is the center of the circle \nEqn of the line is x=s");
	printf("\nEnter the value of h,k,r,s=");
	scanf("%d %d %d %d",&h,&k,&r,&s);
	a=(h-s)*(h-s);
	D=sqrt(a);
	if(D<r)
	{
		l=sqrt(r*r-a);
		l=2*l;
		printf("\nLength of the chord is %d",l);
	}
	else
	{
		printf("\nNo chord exists corresponding to the given line");
	}
}
