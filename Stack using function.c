AIM:
 To write a c program to implement stack operations(push,pop,peek,and display) using functions 
PROGRAM:
#include <stdio.h>
 
int top = -1, n;
 
void display(int arr[])
{
   
 
    printf("Current stack elements are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTop = %d\n", top);
}
 
void push(int arr[])
{
    int item;
    if (top == n - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        top = top + 1;
        arr[top] = item;
        printf("%d pushed into the stack.\n", item);
    }
}
 
void pop(int arr[])
{
    int item;
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        item = arr[top];
        top = top - 1;
        printf("The popped item is: %d\n", item);
    }
}
 
int main()
{
    int op;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
 
    int arr[n];
 
    while (1)
    {
        printf("\nChoose the operation:\n");
        printf("1. Push\n2. Pop\n3. Exit\n");
        scanf("%d", &op);
 
        switch (op)
        {
        case 1:
            push(arr);
            display(arr);
            break;
 
        case 2:
            pop(arr);
            display(arr);
            break;
 
        case 3:
            return 0;
 
        default:
            printf("Incorrect operation selected.\n");
            break;
        }
    }
 
    return 0;
}
