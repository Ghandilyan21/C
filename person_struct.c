#include <stdio.h>
#include <stdlib.h>
typedef struct Person Person;
struct Person
{
    char name[50];
    int age;
    float height;
};
Person* creatPerson(int n){
    Person* person = (Person*)malloc(n*sizeof(Person));
    for (int i = 0; i < n; i++)
    {
        if(person != NULL){
            printf("Enter the %d person name: ", i+1);
            scanf("%s", (person+i)->name);
            printf("Enter the %d person age: ", i + 1);
            scanf("%d", &(person+i)->age);
            printf("Enter the %d person heigh: ", i + 1);
            scanf("%f", &(person+i)->height);
            
        }
        else{
            printf("Memory is not allocated");
        }
    }
    return person;
}
void printPerson(Person* person, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d Person name: %s \n",i+1, (person+i)->name);
        printf("%d Person age: %d \n",i+1, (person+i)->age);
        printf("%d Person height: %f \n",i+1, (person+i)->height);
    }
}
void freePerson(Person* person){
    free(person);
}



int main(){
    int count = 0;
    printf("Enter the count of people");
    scanf("%d", &count);
    Person* person = creatPerson(count);
    printPerson(person, count);
    freePerson(person);
    return 0;
}