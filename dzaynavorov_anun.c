#include <stdio.h>
#include <stdbool.h>
int main(){
    char name[5];
    printf("Enter your name \n");
    scanf("%s", name);
    
    for (int i = 0; i < sizeof(name); i++)
    {
        switch (name[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
            break;
        
        default:
            printf("%c", name[i]);
        }
    }
    
    return 0;
}