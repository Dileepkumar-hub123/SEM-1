//write a c program to find product of 2 numbers using '+'//
#include<stdio.h>
int main()
{
	int i,sum,a,b;
	printf("enter a b values:\n");
	scanf("%d %d",&a,&b);
	sum=0;
	for(i=1;i<=b;i++)
	{
	 sum =sum + a;	
	}
	printf("%d",sum);
	return 0;
}
