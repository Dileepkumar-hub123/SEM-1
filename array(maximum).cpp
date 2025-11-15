#include<stdio.h>
int main()
{
	int i,n,a[50],max;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array eleents:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}printf("\nmaximum value in array:%d",max);
}
