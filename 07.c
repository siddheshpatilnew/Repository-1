#include <stdio.h>

// Define structure
struct student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n, i, j;

    // Accept number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Declare array of structures
    struct student s[n];

    // Input details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        // Calculate percentage
        s[i].percentage = s[i].total / 3;
    }

    // Display results
    printf("\n--- Student Result ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}
