#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    char course[100];
    char line[200];
    int age;
    int number;
    int i;

    printf("Writing Student Database:\n");
    printf("How many students do you want to record? ");
    scanf("%d", &number);
    getchar();

    fp = fopen("student_records.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 1; i <= number; i++) {
        printf("\nStudent %d\n", i);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Age: ");
        scanf("%d", &age);
        getchar();

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);

        fprintf(fp, "Student %d\n", i);
        fprintf(fp, "Name: %s", name);
        fprintf(fp, "Age: %d\n", age);
        fprintf(fp, "Course: %s\n", course);
        fprintf(fp, "-------------------------\n\n");
    }

    fclose(fp);
    printf("\nStudent database successfully saved to file.\n");

    printf("\nReading Student Database:\n\n");

    fp = fopen("student_records.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
