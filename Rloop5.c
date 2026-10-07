#include<stdio.h>
int main(){
int choice;
do{
printf("\n1. say hello \n2.exit\n");
printf("enter choice: ");
scanf("%d",&choice);
if(choice==1)
printf("hello\n");
}
while(choice!=2);
return 0;
}
