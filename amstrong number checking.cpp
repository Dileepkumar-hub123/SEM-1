/*amstrong number*/
#include<stdio.h>
int main()
{
	int sum,num,rem,number;
	printf("enter a number:");
	scanf("%d",&num);
	number=num;
	sum=0;
	while(num!=0)
	{
		rem = num %10;
		sum=sum+(rem*rem*rem);
		num=num/10;	
	}
	if(sum == number)
	{
	printf(" %d is amstrong number\n",number);
	}
	else
	{
	printf("%d is not amstrong number\n",number);
    }  
	return 0;
}

