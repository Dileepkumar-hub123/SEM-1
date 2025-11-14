#include<stdio.h>
#define PI 3.14
int main()
{
	int r;
	float area;
	printf("enter radius:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("area of circle:%f",area);
	return 0;
	
}
