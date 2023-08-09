#include <stdio.h>
int main(){
   int num = 0;
   printf("Enter the number \n");
   scanf("%d", &num);
   if(num > 12){
      int sum = 0;
      while (num)
      {
         sum += num % 10;
         num /= 10;
      }
      printf("%d \n", sum);
   }
   else{
      printf("Please, enther number greater than 12 \n");
   }
   return 0;
}