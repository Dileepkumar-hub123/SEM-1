#include<stdio.h>
int main()
{
	int i,n,A[50],found=0,mid,key;
	printf("Enter n value:");
	scanf("%d",&n);
	
	printf("enter array numbers in assending order:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	int low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==A[mid])
		{
			printf("element is found in A[%d]",mid);
			found=1;
			break;
		}
		else if(key<A[mid])
		{
			high=mid-1;
		}
		else if(key>=mid)
		{
			low=mid+1;
		}
		
	}
	if(found==0){
		printf("Element is not found");
	}return 0;
}
