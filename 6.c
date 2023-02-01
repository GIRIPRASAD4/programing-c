#include <stdio.h>
#include <math.h>
int Pow(int x,int n)
{
	printf("The Power of %d^%d is:%d",x,n,(int) pow(x,n));
}
int Add(int x,int n)
{
	printf("The Sum of the %d ad %d is:%d",x,n,x+n);
}
int Sub(int x,int n)
{
	printf("The difference of %d and %d is:%d",x,n,x-n);
	
}
int Mul(int x,int n)
{
	printf("The Product of %d and %d is:%d",x,n,x*n);
}
int Div(int x,int n)
{
	printf("The Division of %d and %d is:%d",x,n,x/n);
}
main()
{
	int choice,a,b,c,d;
	printf("Pow:1\nAdd:2\nSub:3\nMul:4\nDiv:5\n");
	printf("Enter The Choice:");
	scanf("%d",&choice);
	printf("Enter The First Operand:");
	scanf("%d",&a);
	printf("Enter The Second Operand:");
	scanf("%d",&b);
	switch(choice)
	{
		case 1:
			Pow(a,b);
			break;
		case 2:
			Add(a,b);
			break;
		case 3:
			Sub(a,b);
			break;
		case 4:
			Mul(a,b);
			break;
		case 5:
			Div(a,b);
			break;
	}
}
