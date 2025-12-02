#include<stdio.h>
int main()
{
	int i,j,r,c,a[50][50];
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
	printf("formation of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
