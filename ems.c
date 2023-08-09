#include <stdio.h>
#include <stdlib.h>
typedef struct Employee Employee;

struct Employee{
    int id;
    char name[50];
    int age;
    float salary;
};
Employee* creatEmployee(int n){
    Employee *emp = ( Employee*)malloc(n * sizeof(Employee));
    //printf("YNDHANUR  %lu \n", sizeof(struct Employee));
    //printf("%lu", sizeof(struct Employee));
    for (int i = 0; i < n; i++)
    {
        (emp+i)->id = i + 1;
        printf("Name \n");    
        scanf("%s", (emp+i)->name);
        printf("Age \n");  
        scanf("%d", &(emp+i)->age);
        printf("Salary \n");  
        scanf("%f", &(emp+i)->salary);
    }  
    return emp;
}

void print(Employee* emp , int n){
    for (int i = 0; i < n; i++)
    {
        printf("ID ");    
        printf("%d \n", (emp+i)->id);
        printf("Name ");    
        printf("%s \n", (emp+i)->name);
        printf("Age ");  
        printf("%d \n", (emp+i)->age);
        printf("Salary ");  
        printf("%f \n", (emp+i)->salary);
    }  
    
}

void change(Employee* emp,int num, float prc){
   
   const int index = num - 1;
   Employee a = (*(emp + index));
        if ((emp+index) !=  NULL)
        {
            float tmp = 1 + prc/100;
            //printf("HE%f \n", tmp);
            a.salary = (int)(a.salary * tmp);
            (*(emp+index)) = a;
        }
        else{
            printf("No employee in %d ID", index);
        } 
}

int main(){
    int size = 0;
    printf("Enter the number of employee \n");
    scanf("%d", &size);
    Employee* emp = creatEmployee(size);
    print(emp,size);
    int num = 0;
    printf("Enter id of employee who salary you want to increase \n");
    scanf("%d", &num);
    int prc = 0;
    printf("Enter the salary increasing percent \n");
    scanf("%d", &prc);
    change(emp,num,prc);
    print(emp,size);
    
    
    return 0;
}
