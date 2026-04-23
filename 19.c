#include <stdio.h>
#include <string.h>

// Structure definition
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

// Function to count male and female employees
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0)
            male++;
        else if(strcmp(emp[i].gender, "Female") == 0)
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

// Function to display employees with salary > 10000
void highSalary(struct EMPLOYEE emp[], int n) {
    printf("Employees with salary more than 10000:\n");

    for(int i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}

// Function to display AsstManager employees
void asstManager(struct EMPLOYEE emp[], int n) {
    printf("Employees with designation AsstManager:\n");

    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}

// Main function
int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Array with size n (simple way)
    struct EMPLOYEE emp[n];

    // Input
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender: ");
        scanf("%s", emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Output
    printf("\nTotal number of employees = %d\n", n);

    countGender(emp, n);
    highSalary(emp, n);
    asstManager(emp, n);

    return 0;
}