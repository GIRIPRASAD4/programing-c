#include <stdio.h>
main()
{
	int a,b,c=0,d;
	printf("Enter The Number To Chek Whether it is perfect or not:");
	scanf("%d",&a);
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		{
			c=c+b;
		}
	}
	if(c==a)
	{
		printf("The Entered Number %d is a perfect Number",a);
	}
	else
	{
		printf("The Entered Numeber %d is Not a Perfect Number",a);
	}
}
