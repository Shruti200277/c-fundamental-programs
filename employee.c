


#include <stdio.h>


struct Employee {
    char name[100];
    int id;
    float salary;
    int year;
    float bonus;
};

int main() {
    int num;

  
    printf("Enter the number of employees: ");
    scanf("%d", &num);

    /
    struct Employee employees[num];

   
    for (int i = 0; i < num; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Years of service: ");
        scanf("%d", &employees[i].year);
    }

  
    for (int i = 0; i < num; i++) {
        if (employees[i].year >= 5) {
            employees[i].bonus = employees[i].salary * 0.10;
        } else {
            employees[i].bonus = 0.0;
        }
    }

    
    printf("Employees eligible for bonus:\n");
    for (int i = 0; i < num; i++) {
        if (employees[i].bonus > 0.0) {
            printf("Name: %s\n", employees[i].name);
            printf("ID: %d\n", employees[i].id);
            printf("Bonus: %.2f\n\n", employees[i].bonus);
        }
    }

    return 0;
}