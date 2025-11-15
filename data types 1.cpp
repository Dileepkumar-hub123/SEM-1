#include<stdio.h>
int main ()
{
	int a;
	float b;
	char d;
	char name[20];
	
	printf("enter a value :");
	scanf("%d",&a);
	
	printf("enter b decimal:");
	scanf("%f",&b);
	
	printf("enter grade:");
	scanf("%c\n",&d);
	
	getchar();
	printf("enter name:");
	scanf("%s", name);
	
    printf("\n%d\n%f%c\n%s",a,b,d,name);
	return 0;
}

