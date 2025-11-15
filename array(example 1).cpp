#include<stdio.h>
int main()
{
	int n,a[50],i,j;
	printf("enter n value :");
	scanf("%d",&n);
	printf("enter values in order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array numbers in order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\narray numbers in reverse order:\n");
	for(i=n;i>0;i--)
	{
		printf("%d ",a[i]);
	}
}
