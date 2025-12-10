#include <stdio.h>

int main() {
    char name[20];
    int roll;
    float m1, m2, m3, total, percent;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percent = total / 3.0;

    printf("\n--- Student Result ---\n");
    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", roll);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percent);

    return 0;
}
