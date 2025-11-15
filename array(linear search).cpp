#include<stdio.h>
int main()
{
	int i,n,A[50],key,found=0;
	
	printf("enter n value:");
	scanf("%d",&n);
	
	printf("enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==A[i])
		{
		printf(" element found in A[%d]",i);
		found=1;
		break;
	    }
	}
	if(found==0){
		printf("element not found");
	}return 0;
}
