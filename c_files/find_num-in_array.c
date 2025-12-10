#include <stdio.h>
int main()
{
    int arr[50], i, n, find_num, found = 0, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)  
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be found in the array: ");
    scanf("%d", &find_num);
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == find_num)   
        {
            printf("The number %d is present at position %d\n", find_num, i + 1);
            found = 1;
            break;
        }
    }
    
    if (found == 0)
    {
        printf("The number %d is not present in the array\n", find_num);
    }
}