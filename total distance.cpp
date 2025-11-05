#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("enter acceleration value:");
	scanf("%f",&a);
	
	printf("enter time value:");
	scanf("%f",&t);
	
	printf("enter intial velocity value:");
	scanf("%f",&u);
	d=u*t+(a*t*t)/2;
	printf("\n Total Distance : %f",d);
	return 0;
}
