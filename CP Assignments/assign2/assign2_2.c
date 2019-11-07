#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;      
	float D;           /*(a,b),(c,d) are the coordinates of the two points
			    D is the distance between the two points*/
	printf("Enter the coordinates of the first point=");
	scanf("%d %d",&a,&b);
	printf("Enter the coordinates of the second point=");
	scanf("%d %d",&c,&d);
	D=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("Distance between the two points= %f",D);
}



