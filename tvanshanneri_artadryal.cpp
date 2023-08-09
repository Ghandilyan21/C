#include <stdio.h>
int main(){
   int num = 0;
   printf("Enter the number \n");
   scanf("%d", &num);
   int sum = 1;
   while (num)
   {
      sum *= num % 10;
      num /= 10;
   }
   printf("%d \n", sum);
   return 0;
}