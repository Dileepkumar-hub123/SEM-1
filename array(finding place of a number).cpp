#include<stdio.h>
int main()
{
	int key,i,n,roll_no[59],found=0;
	printf("Enter n value :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter values:");
		scanf("%d",&roll_no[i]);
	}
	printf("Enter key value :");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(key==roll_no[i])
		{
			printf(" element founded :%d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf(" Element not found");
	}
}
