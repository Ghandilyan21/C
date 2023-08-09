#include <stdio.h>
#include <stdlib.h>
typedef struct Vehicle Vehicle;
struct Vehicle{
    int id;
    char model[50];
    float price;
    int year;
    char color[20];
};
Vehicle* create(int size){
    Vehicle* vehicle = (Vehicle*)calloc(size, sizeof(Vehicle));
    if (vehicle != NULL)
    {
        for (int i = 0; i < size; i++)
        {   
            (vehicle+i)->id = i + 1;
            printf("ID %i \n", (vehicle+i)->id);
            
            printf("Enter the %d vehicle mark \n", i+1);
            scanf("%s", (vehicle+i)->model);
            printf("Enter the %d vehicle price \n", i+1);
            scanf("%f", &(vehicle+i)->price);
            printf("Enter the %d vehicle year \n", i+1);
            scanf("%d", &(vehicle+i)->year);
            printf("Enter the %d vehicle color \n", i+1);
            scanf("%s", (vehicle+i)->color);
        }
    }
    return vehicle;
}
void print(Vehicle* vehicle, int size){
    for (int i = 0; i < size; i++)
    {
        printf("_____________________________ \n");
        printf("%s \n", (vehicle+i)->model);
        printf("%f \n", (vehicle+i)->price);
        printf("%d \n", (vehicle+i)->year);
        printf("%s \n", (vehicle+i)->color);
    }
}
void change(Vehicle* vehicle, int id, char sym){
    int index  = id - 1;
    switch (sym)
    {
    case 'm':
    case 'M':
        printf("Reenter the model: \n");
        scanf("%s", (vehicle+index)->model);
        break;
    case 'p':
    case 'P':
        printf("Reenter the price: \n");
        scanf("%f", &(vehicle+index)->price);
        break;
    case 'y':
    case 'Y':
        printf("Reenter the year: \n");
        scanf("%d", &(vehicle+index)->year);
        break;
    case 'c':
    case 'C':
        printf("Reenter the color: \n");
        scanf("%s", (vehicle+index)->color);
        break;
    default:
        break;
    }

}

int main(){
    int vehicle_count = 0;
    printf("Enter the count of vehicles \n");
    scanf("%d", &vehicle_count);
    Vehicle* vehicle = create(vehicle_count);
    
    char sym;
    int tmp_id = 0;
    char option;
    do{
        printf("Enter P to print the vehicles \nand C to change the vehicles \nand X to exit program\n");
        scanf(" %c", &option);
        switch (option)
    {
    case 'P':
    case 'p':
        print(vehicle, vehicle_count);
        break;
    case 'C':
    case 'c':
        printf("Enter the id of vehicle that tou want to change \n");
        scanf(" %d", &tmp_id);
        printf("Enter M to change the model \n");
        printf("Enter P to change the price \n");
        printf("Enter Y to change the year \n");
        printf("Enter C to change the color \n");
        scanf(" %c", &sym);
        change(vehicle, tmp_id, sym);
        break;
    }
    
    }while (option != 'X' && option != 'x');
    
    
    
    
    //print(vehicle, vehicle_count);


    return 0;
}
