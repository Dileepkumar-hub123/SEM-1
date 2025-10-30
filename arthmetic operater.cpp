#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	printf("addition of %d and %d =%d\n",a,b,a+b);
	printf("subtraction of %d and %d =%d\n",a,b,a-b);
	printf("multiplication of %d and %d =%d\n",a,b,a*b);
	printf("quotient of %d and %d =%d\n",a,b,a/b);
	printf("remainder of %d and %d =%d\n",a,b,a%b);
	return 0;
}
