#include <stdio.h>
#include <stdlib.h>
int Count = 1; // cuyc e talis object-neri qanak + 1
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
void delete(Student* student, int id);

int main(){
    Student* student = NULL;
    printf("This programm aloows you to create student management system\n\n");
    char option;
    do{
        printf("\nEnter \nC to create new student\nA to add new student\nP to print the students\nX to exit the program\nD to delete student\n\n");
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
        case 'D':
        case 'd':
        if(student != NULL){
            printf("Enter the id of student to delete : ");
            int id = 0;
            scanf("%d", &id);
            delete(student, id);
            break;
        }
        else{
            printf("\n Warning! You are already created student, you can add new student\nor print them\n");
            break;
        }
        default:
            printf("Enter the valid option : ");
            break;
        }
    }while(option != 'x' || option != 'X');
    //free(student);
    return 0;
}
Student* create(){
    Student* student = (Student*)malloc(Count * sizeof(Student));
    if(student != NULL){
        printf("Memory allocated successfully\n");
    }
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
    scanf("%s", (student+(Count-1))->name);
    printf("Enter the student grade : ");
    scanf("%f", &(student+(Count-1))->grade);
    printf("\nStudent added successfully\n");
    Count++;
}
void print(Student* student){
    for (int i = 0; i < Count-1; i++)
    {
        printf("\nStudent id is: %d \n", i + 1);
        printf("%s \n", (student+i)->name);
        printf("%f \n\n", (student+i)->grade);
    }       
    
}
void delete(Student* student, int id){
    int index = id - 1;
    free(student + index);
    for (int i = index; i < Count - 1; i++)
    {
        student[i] = student[i + 1];
    }
    
    student = realloc(student, (Count - 2) * sizeof(Student));
    Count--;
}