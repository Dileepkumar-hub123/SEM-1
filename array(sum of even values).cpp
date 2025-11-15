#include<stdio.h>
int main()
{
	int i,n,A[50],sum=0;
	printf("size of array:");
	scanf("%d",&n);
	
	printf("enter values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
			sum=sum +A[i];
		}
	}printf("%d",sum);
}
