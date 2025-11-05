AIM:
To write a c program to insert an elements into an array at a specified position.

PROGRAM:
#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter the no. of array elements: ");
    scanf("%d", &n);
 
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Swapped elements:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
 
    int newElement;
    printf("\nEnter the new element: ");
    scanf("%d", &newElement);
 
    arr[0] = newElement;
 
    printf("The elements after inserting new element:\n");
    for (int i = 0; i < n; i++)
    {
        printf("The element at index %d is %d\n", i, arr[i]);
    }
 
    return 0;
}
 
