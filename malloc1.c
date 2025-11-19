#include <stdio.h>
#include <stdlib.h>
struct employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    int n, i;
    float totalSalary = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee *emp = (struct employee *)malloc(n * sizeof(struct employee));
    printf("\n size of stucture employee:%d bytes \n",(int)sizeof(struct employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Monthly Salary: ");
        scanf("%f", &emp[i].salary);
        totalSalary += emp[i].salary * 12;
    }
    printf("\nTotal Annual Salary Expenditure = %.2f\n", totalSalary);
    free(emp);
    return 0;
}
