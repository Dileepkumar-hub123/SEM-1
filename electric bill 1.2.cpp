//WRITE A C PROGRAM TO PRINT ELECTRIC BILL
#include<stdio.h>
int main()
{
	int unit,price,amount;
	printf("enter unit value:");
	scanf("%d",&unit);
	if(unit<=50)
	{
	price=20;
	}
	else if(unit<=100)
	{
	price=30;
	}
	else if(unit<=200)
	{
	price=40;
	}
	else 
	{
	price=50;
    }
	amount=unit*price;
	printf("electric bill is:%d",amount);
	
	return 0;
	
}
