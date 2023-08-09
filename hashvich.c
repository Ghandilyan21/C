#include <stdio.h>
int main(){
   int num1 = 0;
   int num2 = 0;
   char sign;
   do{
   printf("Enter the first number \n");
   scanf("%d", &num1);
   printf("Enter the second number \n");
   scanf("%d", &num2);   
   printf("Enter the action sign\n");
   scanf(" %c", &sign);
   switch (sign)
   {
   case '+':
      printf("%d \n", num1 + num2);
      printf("Hello");
      break;
   case '-':
      printf("%d \n", num1 - num2);
      break;
   case '/':
      printf("%d \n", num1 / num2);
      break;
   case '*':
      printf("%d \n", num1 * num2);
      break;
   case 'x':
      printf("Exiting the programm \n");
      break;
   default:
      printf("Enter the valid sign ( +, -, /, * ) \n");
   }
   }while(sign != 'x');


   return 0;
}
