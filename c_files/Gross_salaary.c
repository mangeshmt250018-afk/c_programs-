#include <stdio.h>

int main() {
    int id;
    char name[20];
    float bs, hra, da, pf, gs, ns;
    printf("Name :- mangesh arun mahajan \nRoll number :- FIB48 \n");

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    hra = 0.10 * bs;
    da  = 0.20 * bs;
    gs  = bs + hra + da;
    pf  = 0.08 * bs;
    ns  = gs - pf;

    printf("\n--- Employee Salary Details ---\n");
    printf("Employee ID      : %d\n", id);
    printf("Employee Name    : %s\n", name);
    printf("Basic Salary     : %.2f\n", bs);
    printf("HRA              : %.2f\n", hra);
    printf("DA               : %.2f\n", da);
    printf("Gross Salary     : %.2f\n", gs);
    printf("PF               : %.2f\n", pf);
    printf("Net Salary       : %.2f\n", ns);

    return 0;
}

