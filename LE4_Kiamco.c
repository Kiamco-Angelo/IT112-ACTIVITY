#include <stdio.h>

int main () {

    char name[30];
    char section[30];

    int num1, num2, num3, num4;
    int number = 4;

    
    printf("Enter Your Complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Your Section: ");
    fgets(section, sizeof(section), stdin);

   
    printf("\nEnter 1st Quarter Grade: ");
    scanf("%d", &num1);
    printf("Enter 2nd Quarter Grade: ");
    scanf("%d", &num2);
    printf("Enter 3rd Quarter Grade: ");
    scanf("%d", &num3);
    printf("Enter 4th Quarter Grade: ");
    scanf("%d", &num4);

    
    double average = (num1 + num2 + num3 + num4) / (double)number;

    
    printf("\nStudent Name: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2lf\n", average);

    
    if (average >= 90) {
        printf("Remarks: Outstanding\n");
    } else if (average >= 85) {
        printf("Remarks: Very Satisfactory\n");
    } else if (average >= 80) {
        printf("Remarks: Satisfactory\n");
    } else if (average >= 75) {
        printf("Remarks: Fair\n");
    } else {
        printf("Remarks: Failed\n");
    }

    return 0;
}