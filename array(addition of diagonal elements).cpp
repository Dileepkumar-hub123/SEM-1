#include<stdio.h>
int main()
{
	int i,j,n,m,a[10][10],dia=0;
	printf(" enter m & n value:");
	scanf("%d %d",&m,&n);
	if(m==n)
	{
	 printf("enter array elements:\n");
	 for(i=0;i<m;i++)
	 { 
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	 }
	  printf("array elements:\n");
	 for(i=0;i<m;i++)
	 { 
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}printf("\n");
	 }
	 printf("\ndiagonal matrix addition:\n");
	 for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			dia=dia+a[i][i];	
			}
		}
	 }
	printf("%d",dia);
  } 

}
