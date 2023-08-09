#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter the first number \n");
    scanf(" %d", &a);
    printf("Enter the second number \n");
    scanf(" %d", &b);
    printf("Enter the third number \n");
    scanf(" %d", &c);
    int r = 0;
    while(a != b && a > 0 && b > 0){
        if(a > b){
        r = a-b;
        a = b;
        b = r;
        }
        else if(a < b){
            r = b - a;
            b = a;
            a = r;
        }
    }
    while(b != c && b > 0 && a > 0){
        if(b > c){
        r = b-c;
        b = c;
        c = r;
        }
        else if(b < c){
            r = c - b;
            c = b;
            b = r;
        }
    }
        printf("%d \n", b);
    return 0;
}