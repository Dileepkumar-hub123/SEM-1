#include<stdio.h>
int main()
{
	int n=3;
	scanf("%d",&n);
	if(n==3)
	{
		goto next;
	next:
		printf("It is three");
	}
	else
	printf("it is not three");
		return 0;
}
