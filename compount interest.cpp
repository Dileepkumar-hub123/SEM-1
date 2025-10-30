#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("enter principal amount;");
	scanf("%f",&p);
	printf("enter time peroid:");
	scanf("%f",&t);
	printf("enter rate of interest:");
	scanf("%f",&r); 
	ci=p*(pow(1+(r/100),t)-1);
	printf("compount interest:%2f",ci);
	return 0;
	
}

