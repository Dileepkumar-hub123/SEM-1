// electric bill
#include<stdio.h>
int main()
{
  int units=5;
  int price=100;
  int discount=100;
  float amount;
  amount=units*price -discount;
  char name[10]="dileep";
  printf("consumer name %s\n",name);
  printf("amount of bill is %2f",amount);
  return 0;
}
