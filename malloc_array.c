#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("The memory not allocated!!! \n");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    } 
    
    free(ptr);
    
    return 0;
}