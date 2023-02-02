#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first number(P):");
    scanf("%d",&a);
    printf("Enter the second number(Q):");
    scanf("%d",&b);
    printf("Enter the Digit(R):");
    scanf("%d",&c);
    for(d=a;d<=b;d++)
    {
        if(d%10!=c)
        {
            printf("%d",d);
            if(d<b)
            {
                printf(",");
            }
        }
    }
return 'o';
}
