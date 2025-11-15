#include<stdio.h>
int main()
{
  char name[50];
  int unit,price,amount;
  
  printf("enter your name:");
  scanf("%s",&name);
  
  printf("no of units:");
  scanf("%d",&unit);
  
  printf("enter unit per price:");
  scanf("%d",&price);
  
  amount=unit*price;
  printf("\n__electric bill__\n");
  printf("customer name:%s\n",name);
  printf("electric bill:%d",amount);
  return 0;	
}
