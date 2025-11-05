AIM: 
 To write a c program to demonstrate the use of the switch case statement for performing different operations based on user choice.
PROGRAM:
#include <stdio.h>
int main()
{
    int n, op, top, item;
    top = -1;
 
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
 
    int arr[n];
 
    while (op<3)
    {
        printf("\nChoose the operation to do:\n");
        printf("1. Push\n2. Pop\n3. Exit\n");
        scanf("%d", &op);
 
        switch (op)
        {
        case 1:
            if (top == n - 1)
            {
                printf("Stack Overflow!\n");
            }
            else
            {
                printf("Enter the element to insert: ");
                scanf("%d", &item);
                top = top + 1;
                arr[top] = item;
                printf("%d pushed into the stack.\n", item);
            }
            break;
 
        case 2:
            if (top == -1)
            {
                printf("Stack Underflow!\n");
            }
            else
            {
                item = arr[top];
                top = top - 1;
                printf("Recently removed item: %d\n", item);
            }
            break;
 
        case 3:
            return 0;
 
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    }
 
    return 0;
}
 
