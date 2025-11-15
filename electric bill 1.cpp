//WRITE A C PROGRAM TO PRINT ELECTRIC BILL
#include<stdio.h>
int main()
{
	int unit,price;
	printf("enter unit value:");
	scanf("%d",&unit);
	if(unit<=50)
	{
	price=unit*20;
	printf("electric billis:%d",price);
	}
	else if(unit<=100)
	{
	price=unit*30;
	printf("electric bill is:%d",price);
	}
	else if(unit<=200)
	{
	price=unit*40;
	printf("electric bill is :%d",price);
	}
	else 
	{
	price=unit*50;
	printf("electric bill is:%d",price);
	}
	return 0;
	
}
