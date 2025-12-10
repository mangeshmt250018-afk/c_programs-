#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int choice;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\n1. String Length");
    printf("\n2. String Copy");
    printf("\n3. Concatenation");
    printf("\n4. Comparison");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of first string = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("After copying, second string = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("After concatenation = %s", str1);
            break;

        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
