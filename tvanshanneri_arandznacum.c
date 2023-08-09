#include <stdio.h>
int main(){
   int num = 0;
   int reverse = 0;
   printf("Enter the number \n");
   scanf("%d", &num);
   while (num)
   {
      int sign = num%10;
      num /= 10;      
      reverse = reverse * 10 + sign;
   
   }
   while (reverse)
   {
      int num1 = reverse % 10;
      printf("%d \n", num1);
      reverse /= 10;
   }

   
   
   return 0;
}