#include<stdio.h>
int main()
{
int num1;
int num2;
char op;
int result;
printf("enter first number:\n");
scanf(" %d",&num1);
printf("enter second number:\n");
scanf(" %d",&num2);
printf("enter which operator to use :\n");
scanf(" %c",&op);

switch(op)
{
case '+': result = num1+num2; printf("%d",result);
          break;
case '-': result = num1-num2; printf("%d",result);
          break;
case '*': result = num1*num2; printf("%d",result);
          break;
case '/': result = num1/num2; printf("%d",result);
          break;
case '%': result = num1%num2; printf("%d",result);
          break;
default : printf("invalid input");
}
return 0;
}
