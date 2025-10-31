#include<stdio.h>
int main()
{
	int i,A[50]={7,9,14,8,10,22,5};
	A[7]=19;
	printf(" value of A[7] is :%d\n",A[7]);
	printf(" Before update value of A[3] is: %d\n",A[3]);
	A[3]=18;
	printf(" After update value of A[3] is :%d\n",A[3]);
	for(i=0;i<8;i++)
	{
	printf("%d\n",A[i]);
	}
	return 0;
	
	
}
