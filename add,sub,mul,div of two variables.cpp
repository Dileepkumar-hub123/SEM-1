#include<stdio.h>
int main()
{
	float q;
	int c,d,e,g,a,b;
	printf(" enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	c=a+b;
	printf("addition = %d",c);
	d=a-b;
	printf("\nsubraction = %d",d);
	e=a*b;
	printf("\nproduct = %d",e);
	q=a/b;
	printf("\nquotient = % f",q);
	g=a%b;
	printf("\nremainder = %d",g);
	return 0;
}
