#include<stdio.h>

typedef struct {
    char *name;
    int age;
    int salary;
} employee;

int manager() {
    employee manager;
    manager.name = "Imari Chin";
    manager.age = 35;
    // determine the manager's salary
    if (manager.age >= 40) {
        manager.salary = 60000;
    } else {
        manager.salary = 40000;
    }
    return manager.salary;
}

int main(void){
    employee emp1, emp2;
    emp1.name = "Davian Chin";
    emp2.name = "Tenil Copeland";
    
    printf("Please enter the salary of %s: \n", emp1.name);
    scanf("%d", &emp1.salary);
    printf("Please enter the salary of %s: \n", emp2.name);
    scanf("%d", &emp2.salary);

    printf("%s's salary is %d\n", emp1.name, emp1.salary);
    printf("%s's salary is %d\n", emp2.name, emp2.salary);
    printf("Imari Chin's salary is %d\n", manager());

    return 0;
}
