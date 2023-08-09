#include <stdio.h>
#include <string.h>
int main(){
    char name[500];
    printf("Enter your name \n");
    fgets(name, sizeof(name), stdin);    
    for (int i = 0; i < sizeof(name); ++i)
    {
        if (name[i] != '\0')
        {        
            if (name[i] >= 'A' && name[i] <= 'Z')
            {
                printf("%c", name[i] + 32);   
            }
            else{
                printf("%c", name[i]); 
            }
        }
        else{
            printf("\nThe end of line \n");
            break;
        }
    }
    return 0;
}