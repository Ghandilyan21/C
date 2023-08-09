#include <stdio.h>
#include <stdbool.h>
int main(){
    char name[5];
    printf("Enter your name \n");
    scanf("%s", name);
    char vowels[12] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (int i = 0; i < sizeof(name); ++i)
    {
        int count = 0;
        for (int j = 0; j < sizeof(vowels); ++j)
        {
            if (name[i] == vowels[j])
            {
                ++count;   
            }   
        }
        if(count == 0)
        {
            printf("%c", name[i]);
        }   
    }
    return 0;
}