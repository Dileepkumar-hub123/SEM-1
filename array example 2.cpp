//display student marks of ppsc by using inputted numbers
#include<stdio.h>
int main()
{
	int n,i;
	printf(" Enter array size :");
	scanf("%d",&n);
	int student[n];
	
	printf("enter marks of student:");
	
	for(i=0;i<=n;i++)
	{
	  scanf("%d",&student[i]);
    }
    printf(" Marks of student :");
    for(i=0;i<n;i++)
    {
    	printf(" Marks of students %d is %d\n ",i,student[i]);
	}
	
}
