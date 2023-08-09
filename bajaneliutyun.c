#include <stdio.h>
#include <string.h>
int main(){
    int a = 0;
    int b = 0;
    printf("Enter the first number \n");
    scanf(" %d", &a);
    printf("Enter the second number \n");
    scanf(" %d", &b);
    if(a % b == 0 || b % a == 0){
        printf("Bajanvum en \n");
    }
    else{
        printf("Chi bajanvum \n");
    }
    return 0;
}