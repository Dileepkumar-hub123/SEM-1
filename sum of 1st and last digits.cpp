#include<stdio.h>
int main()
{
	int a=0,n,m,sum;
	scanf("%d",&n);
	m=n%10;
	while(n!=0)
	{
		a=n%100;
		a=a+n;
		n=n/10;
		if(a>9)
		{
		  a=0;
		}
		else{
			break;
		}
		
	}sum=m+n;
	printf("%d",sum);
}
