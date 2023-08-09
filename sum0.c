#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    int num = 0;
    int small = 0;
    int sum = 0;
    do{
        printf("Enter the number \n");
        scanf("%d", &num);
        if(num < small){
            small = num;  
        }
        sum += num;
        count++;
    }while(count<4);
    if(!sum){
            printf(" Smallest is: %d \n", small);
        }
        else if(sum != 0){  
            printf("Not equal to 0 \n");
        }
    return 0;
}