#include <stdio.h>
int main(){
    int arr[5];
    int sorted[5];
    int min = 0;
    int swap_index = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        min = arr[i];
        for (int j = 0; j < 4; j++)
        {
            if (arr[i+1] < min)
            {
                min = arr[i+1];
                swap_index = i+1;
            }           
        }
        int tmp = arr[i];
        arr[i] = min;
        arr[swap_index] = tmp; 
    }
    
    
    
    for (int i = 0; i < 5; i++)
    {
        printf("-------- %d \n", arr[i]);
    }
    
    
    return 0;
}