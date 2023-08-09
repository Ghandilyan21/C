#include <stdio.h>
#include <string.h>
int main(){
    int a = 0;
    printf("Enter the number \n");
    scanf(" %d", &a);
    if(a % 4 == 0){
        printf("Nahanj \n");
    }
    else{
        printf("CHnahanj \n");
    }
    return 0;
}