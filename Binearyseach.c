AIM:
 To write a c program to search for an element in a sorted array using the binearyseach algorithm.
 PROGRAM:
# include <stdio.h>
int main()
{
    int i, n, low, mid, high, found = 0, key;
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
    low = 0;
    high = n;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            printf("element found at index :%d", mid);
            found = 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        if (found == 0)
        {
            printf(" Invalid ");
            break;
        }
    }
    return 0;
}
