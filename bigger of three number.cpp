#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a,b,c value:\n");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
    printf(" greater of %d,%d,%d is:%d",a,b,c,max);
	return 0; 
}

