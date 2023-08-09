#include <stdio.h>
int main(){
   int num = 0;
   int reserve = 0;
   printf("Enter the number \n");
   scanf("%d", &num);
   while (num)
   {
      int sign = num % 10;
      num /= 10;
      reserve = reserve*10 + sign;
   }
   printf("%d \n", reserve);
   
   return 0;
}