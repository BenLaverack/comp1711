#include <stdio.h>

struct student {
    char name [200];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;

    printf("Please enter the final mark of the student:\n");
    scanf("%d", &new_student.mark);

    printf("Please enter the students name:\n");
    scanf("%s", new_student.name);
    // because names have whitespace, they scanf cant be used

    printf("Please enter the students ID number:\n");
    scanf("%s", new_student.student_id);


    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}