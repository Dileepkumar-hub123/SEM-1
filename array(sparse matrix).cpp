#include<stdio.h>
int main()
{
	int i,j,r,c,a[50][50],num=0;
	
	printf("enter r,c value:");
	scanf("%d %d",&r ,&c);
	
	printf("enter matrix value in order:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  if(a[i][j]==0)
		  {
		  	num=num+1;
		  }
		}
	}
	if(num>(r*c)/2)
	{
		printf("sparse matrix");
	}
	else{
		printf("not sparse matrix");
	}
}
