#include<stdio.h>
int main()
{
	 int n,i,sum=0;
	 printf("Enter vaue of n:");
	 scanf("%d",&n);
	 i=1;
	 while(i<=n)
	 {
	 sum=sum+i;
	 i++;
	 }
	 printf("sum of given number is %d",sum);
	 return 0;
}
