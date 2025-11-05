AIM:
To write a c program to search for an element in an array using tha linear search algorithm 
PROGRAM:
#include <stdio.h>
int main()
{
    int i, n, key, found = 0;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("enter %d elements:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d", &key);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("element found at index :%d", i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Invalid Input");
    }
    return 0;
}
