AIM:
 To write a c program to convert sn arithmetic expression from infix notation to postfix notation using a stack.
PROGRAM:
#include <stdio.h>
#include<stdlib.h>
int TOP=-1,MAX;
char *STACK;
void push(char item)
{
    if(TOP==MAX-1)
    {
        printf("stack is overflow");
       
    }
    else
    {
        TOP=TOP+1;
        STACK[TOP]=item;
    }
}
char Pop()
{
    char item;
    if(TOP==-1)
    {
        printf("stack is underflow/empty/n");
        return '\0';
    }
    else
    {
        item=STACK[TOP];
        TOP=TOP-1;
        return item;
    }
}
char Peek()
{
    if(TOP==-1)
    {
        return '\0';
    }
    else
    {
        return STACK[TOP];
    }
}
int GetPrecedence(char op)
{
    switch(op)
    {
        case '+':
        case '-':
            return 1;
   
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}
int main()
{
    printf("Enter the size of infix epression:");
    scanf("%d",&MAX);
   
    STACK =(char*)malloc(MAX*sizeof(char));
    char infix[MAX];
    char postfix[MAX];
    printf("please enter the infix string of size %d :",MAX);
    scanf("%s",infix);
    int TokenPrecedence,j=0,i=0;
    char c,temp;
    while((c=infix[i]) !='\0')
    {
        TokenPrecedence=GetPrecedence(c);
        if(TokenPrecedence>0)
        {
            while(TokenPrecedence<=GetPrecedence(Peek()))
            {
                postfix[j++]=Pop();
            }
            push(c);
        }
        else
        {
            switch(c)
            {
                case '(':
                   push(c);
                   break;
                case ')':
                    while(Peek()!='(')
                    {
                        postfix[j++]=Pop();
                    }
                    Pop();
                    break;
                     default:
                         postfix[j++]=c;
                         break;
            }
        }
        i++;
    }
    while(Peek()!='\0'){
        char c=Pop();
        postfix[j++]=c;
    }
    postfix[j]='\0';
    printf("postfix notation is :%s",postfix);
    return 0;}
    Output:
Enter the size of infix epression:5
please enter the infix string of size 5 :a+b*c
postfix notation is :abc*+
Insertion elements
Program:
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
