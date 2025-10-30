#include<stdio.h>
int main()
{
	int n,rev=0,rem,pal;
	printf("enter number:");
	scanf("%d",&n);
	pal=n;
	while(n!=0)
	{
		rem=n%10;
		rev = (rev * 10) + rem;
		n=n/10;
	}
	if(pal==rev)
	{
	   printf("palidrom %d",rev);
	}
	else
	{
	   printf("not palidrom %d",rev);
	}
}
