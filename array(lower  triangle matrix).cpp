#include<stdio.h>
int main()
{
	int i,j,n,m,a[10][10];
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
	 printf("upper triangle matrix:\n");
	 for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d ",a[i][j]);
			}
			else if(i<j)
			{
				printf("0 ");
			}
		}	printf("\n");
	 }
	}

}
