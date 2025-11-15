//selection sort//
#include<stdio.h>
int main()
{
	int i,j,n,A[50],temp,min;
	printf("enter n value:");
	scanf("%d",&n);
	
	printf("enter array values:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
    	min=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(A[j]<A[min])
    		{
    			min=j;
			}
		}
		if(min!=i)
		{
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
		}
	}printf("assending order:");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}

