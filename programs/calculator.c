#include <stdio.h>
#include <conio.h>
int main(){
 //declarations
double num1, num2;
int op;
printf("*********WELCOME*********\n");
printf("1.Addition\n2.Substration\n3.Multiplication\n4.Division\n");
printf("enter your choice\n");
scanf("%d",&op);
printf("Enter first number\n");
scanf("%lf",&num1);

printf("Enter second number\n");
scanf("%lf",&num2);
 switch(op){
     case 1:

         printf("=%lf\n", num1+num2);
         break;
     case 2:
         printf("=%lf\n", num1-num2);
         break;
     case 3:
         printf("=%lf\n", num1*num2);
         break;
     case 4:
         if(num2==0){
             printf("Division by zero error!\n");
         }else{
             printf("=%lf\n", num1/num2);
        }
        break;

     default: printf("Invalid Operator\n");
}
  return 0;
}
