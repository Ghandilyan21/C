#include <stdio.h>
void toBinary(int x){
    int a = x;
    int tmp = a;
    int bit = 0;
    int power = 1;
    while (tmp)
    {
        tmp /= 2;
        bit++;
    }
    char arr[32];
    int tmpbit = bit;
    printf("The count of bits is: %d \n", bit);
    for (int j = 0; j < bit - 1; j++)
        {  
            power *= 2;     
        }
    for (int i = 0; i < tmpbit; i++)
    {    
        //printf("Power is: %d \n", power);
        //printf(" A is: %d \n", a);
        if (a - power >= 0 )
        {
            arr[sizeof(arr)-bit] = '1';
            //printf("%c", arr[sizeof(arr)-bit]);
            //printf("1 \n");
            a -= power;
        }
        else if(a - power < 0 ){
            arr[sizeof(arr)- bit] = '0';
            //printf("0 \n");
        }
        power /= 2;
        --bit;
    }
    if (tmpbit <= 5)
    {
        arr[31] = '1';
    }
    for (int i = 0; i < 32; i++)
    {
        if (i >= 0 && i < sizeof(arr) - tmpbit)
        {
            arr[i] = '0';
        }
    }
    if(tmpbit > 5){
        arr[sizeof(arr)-tmpbit+4] = '1';
    }
    for (int i = 0; i < 32; i++)
    {
        printf("%c", arr[i]);
    }
}
int main(){
    int a = 0;
    printf("Enter the number \n");
    scanf(" %d", &a);
    toBinary(a);
    return 0;
}