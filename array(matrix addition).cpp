#include<stdio.h>
int main()
{
	int i,j,c,r,a[20][20],b[20][29],sum[20][20];
	printf("enter no of rows,columns :\n");
	scanf("%d %d",&r,&c);
	
	printf("enter first matrix elements :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2 matrix elements :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
}
