//print duplicate elements//
#include<stdio.h>
int main()
{
	int i,j,n,a[50],found=0,k=0;
	printf("Enter n value:");
	scanf("%d",&n);
	
	printf("enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }printf("array elements:");
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
    }
    printf("\nduplicate elements is :");
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			for(k=0;k<i;k++)
    			{
    				if(a[k]==a[i])
					{
    				   break;
    			    }
    		    }
    		       if(k==i)
    		    {
    		       printf("%d ",a[i]);
    			   found=1;
				}
			}
		}
	}if(found==0)
	{
		printf("no duplicate element is found");
	}
 } 
