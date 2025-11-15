#include<stdio.h>
int main()
{
	int radius;
	float area,pi,circumference;
	pi=3.147;
	printf("enter radius of circle:");
	scanf("%d" ,&radius);
	area=pi*radius*radius;
	printf("area of circle having radius %dcm is=%fcm\n",radius,area);
	
	circumference=2*pi*radius;
	printf("circumference of circle having radius %dcm is=%fcm",radius,circumference);
	return 0;
}
