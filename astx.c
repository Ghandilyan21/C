#include <stdio.h>
void asterisk(int size){
        for (int i = 0; i < size; i++)
        {
            if (i == 0 || i == size-1)
            {
                for (int i = 0; i < size; i++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else{
                printf("* ");
                for (int i = 0; i < 2*(size-2); i++)
                {
                    printf(" ");
                }
                printf("* \n");
            }  
        } 
}
int main(){
    int size = 0;
    printf("Enter the square size \n");
    scanf("%d", &size);    
    asterisk(size);
    return 0;
}