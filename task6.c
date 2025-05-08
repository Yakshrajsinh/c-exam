#include <stdio.h>

int main() {
    FILE *file;
    char name[100], course[100];
    int i;

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(name, sizeof(name), stdin);
        printf("Enter course of student %d: ", i + 1);
        fgets(course, sizeof(course), stdin);

        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Name: %s", name);
        fprintf(file, "Course: %s\n", course);
    }

    fclose(file);
    printf("Data written to data.txt successfully.\n");

    return 0;
}
