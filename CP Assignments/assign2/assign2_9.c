#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,g,h,H,K,L,R,r,D;
	printf("Eqn of plane is ax+by+cz+d=0 \neqn of sphere is x*x+y*y+z*z+e*x+f*y+g*z*+h=0");
	printf("\nEnter the value of a,b,c,d,e,f,g,h= ");
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	H=-e/2;
	K=-f/2;
	L=-g/2;
	R=sqrt(H*H+K*K+L*L-h);
	D=(a*H+b*K+c*L+d)/sqrt(a*a+b*b+c*c);
	r=sqrt(R*R-D*D);
	printf("\nCentre of the sphere is (%d,%d,%d)",H,K,L);
	printf("\nRadius of Sphere= %d",R);
	printf("\nDist. between them= %d",D);
	printf("\nRadius of the circle= %d",r);

}	

