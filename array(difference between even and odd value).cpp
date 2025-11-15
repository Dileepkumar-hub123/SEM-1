#include<stdio.h>
int main()
{
	int i,n,A[50],even=0,odd=0,difference;
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
			even=even +A[i];
		}
		else{
			odd=odd+A[i];
		}
	}difference=even-odd;
	printf("%d",difference);
}
