//WRITE A C PROGRAM TO CHECH GIVEN NUMBER IS POSITIVE OR NEGATIVE OR NEUTRAL OR INVALID
#include<stdio.h>
int main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	if(x>0)
	{
	printf("given number %d is positive",x);
    }
    else
    if(x<0)
    {
    printf("given number %d is negative",x);
	}
	else
	if(x==0)
	{
	printf("given number %d is neutral",x);
	}
	else
    {
    printf("given number %d is invalid input");
    }
    return 0;
}
