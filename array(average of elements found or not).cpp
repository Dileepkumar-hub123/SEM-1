#include<stdio.h>
int main()
{
	int i,n,a[50],ave,sum=0,found=0;
	printf("Enter n value:");
	scanf("%d",&n);
	
	printf("enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		if(ave==a[i])
		{
		printf("true");
		found=1;
		break;
		}
	}
	if(found==0)
	{
		printf("False");
	}
}
