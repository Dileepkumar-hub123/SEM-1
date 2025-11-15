//WRITE A C PROGRAM TO CHECH GIVEN NUMBER IS EVEN OR ODD
#include<stdio.h>
int main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	if(x%2==0)
	{
	printf("given number is even");
	} 
	else
	{
	printf("given number is odd");	
	}
	return 0;
}
