#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the numbes");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int n1,n2,n3,n4;
	int a1=a,b1=b,c1=c,d1=d;
	while(a1>0)
	{
		a1=a1/10;
		n1++;
	}
	while(b1>0)
	{
		b1=b1/10;
		n2++;
	}
	while(c1>0)
	{
		c1=c1/10;
		n3++;
	}
	while(d1>0)
	{
		d1=d1/10;
		n4++;
	}
	printf("%d",a);
	if(n1>=n3)
	{
		printf("%d\n",b);
		printf("%d",c);
		for(int j=0;j<n1-n3;j++)
		printf(" ");
		printf("%d",d);
	}
	else
	{
		for(int i=0;i<n3-n1;i++)
		printf(" ");
		printf("%d\n%d%d",b,c,d);

	}
	}








