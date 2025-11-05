AIM:
   To write a C program to implement stack operations such as push, pop, peek, and display using an array (or linked list).
PROGRAM:
#include <stdio.h>
int main()
{
    int MAX,operation,item,TOP;
    TOP=-1;
    printf("enter the size of STACK:");
    scanf("%d",&MAX);
    int STACK[MAX];
    while(operation<3)
    {
        printf("1.push\n 2.pop\n 3.exit\n");
        printf("please choose stack operation to perform:");
        scanf("%d",&operation);
        switch(operation)
        {
            case 1:
            if (TOP==MAX-1)
            {
                printf("stack is overflow");
            }
            else
            {
                printf("enter the item to push:");
                scanf("%d",&item);
                TOP=TOP+=1;
                STACK[TOP]=item;
            }
            break;
            case 2:
            if(TOP==-1)
            {
                printf("stack is underflow");
            }
            else
            {
                item=STACK[TOP];
                TOP=TOP-1;
                printf("top element in the :%d",item);
            }
            break;
            case 3:
            return 0;
            default:
            printf("incorrect operation selected");
            break;
        }
    }
    return 0;
}

