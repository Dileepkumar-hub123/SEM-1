#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	
	printf("assign a value to b:%d\n",a=b);
	printf("add b value to a and store in a:%d\n",a+=b);
	printf("subtract b value from a and store in a:%d\n",a-=a-b);
	printf("multiplies b value from a and assign in a:%d\n",a*=b);
	printf("done division and quotient store in a:%d\n",a/=b);
	printf("done division and syores remainder in a:%d",a%=b);
	return 0;
}
