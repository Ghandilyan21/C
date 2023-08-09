#include <stdio.h>
#include <stdlib.h>
int Count = 1; // cuyc e talis object-neri qanak + 1
//int qanak = 1;
//int index = 1;
typedef struct Student Student;
struct Student
{
    int id;
    char name[50];
    float grade;
};
// prototypes
Student* create();
void add(Student* student);
void print(Student* student);

int main(){
    Student* student = NULL;
    printf("This programm aloows you to create student management system\n\n");
    char option;
    do{
        printf("\nEnter \nC to create new student\nA to add new student\nP to print the students\nX to exit the program\n\n");
        printf("Your choice is: ");
        scanf(" %c", &option);
        switch (option)
        {
        case 'C':
        case 'c':
        if(student == NULL){
            student  = create();
            break;
        }
        else{
            printf("\n Warning! You are already created student, you can add new student\nor print them\n");
            break;
        }
        case 'A':
        case 'a':
            if(student != NULL){
                add(student);
                break;
            }
            else{
                printf("\nWarning!!! First crate student then add them\n");
                break;
            }
        case 'X':
        case 'x':
            free(student);
            printf("\nThe programm is closed \n");
            return 0;
        case 'P':
        case 'p':
            if(student != NULL){
                print(student);
                break;
            }
            else{
                printf("\nYou havn't students\nPlease chose C to create \n");
                break;
            }
        default:
            printf("Enter the valid option : ");
            break;
        }
    }while(option != 'x' || option != 'X');
    free(student);
    return 0;
}
Student* create(){
    Student* student = (Student*)calloc(Count , sizeof(Student));
    student->id = 1;
    printf("\nEnter the student name : ");
    scanf("%s", student->name);
    printf("Enter the student grade : ");
    scanf("%f", &student->grade);
    Count++;
    printf("\nYou created student successfully\nNow you can add or print them\n");
    return student;
}
void add(Student* student){
    student = realloc(student, Count * sizeof(Student));
    //(student+Index)->id = (student->id)++;
    printf("Enter the student name : ");
    scanf("%s", (student+Count-1)->name);
    printf("Enter the student grade : ");
    scanf("%f", &(student+Count-1)->grade);
    printf("\nStudent added successfully\n");
    Count++;
    //qanak++;
    
}
void print(Student* student){
    //printf("%d esaaaaa", Count);
    //printf("%d arajini id_n", (student)->id);
    for (int i = 0; i < Count-1; i++)
    {
        //printf("%d Countnaaa", Count);
        printf("Student id is: %d \n", i + 1);
        printf("%s \n", (student+i)->name);
        printf("%f \n\n", (student+i)->grade);
    }       
    
}