AIM:
 To write a c program to reverse the given string using sutible manipulation techiches.
PROGRAM:
#include<stdio.h>
#include<stdlib.h>
int TOP = -1,MAX;
char * STACK;
void push(char item)
{
    if(TOP == MAX-1)
    {
        printf("stack overflow");
    }
    else
    {
        TOP=TOP+1;
        STACK[TOP]=item;
    }
}
char pop()
{
    char item;
    if(TOP == -1)
    {
        printf("stack is underflow /emppty \n");
        return '\0';
    }
    else
    {
        char item = STACK[TOP];
        TOP = TOP-1;
        return item;
    }
}
int main()
{
    printf("Enter the size of string to reverse:");
    scanf("%d",&MAX);
    char stringToReverse[MAX];
    STACK=(char*)malloc(MAX*sizeof(char));
    printf("please enter the string of size %d to reverse:",MAX);
    scanf("%s",stringToReverse);
    for(int i=0;i<MAX;i++)
    {
        push(stringToReverse[i]);
    }
    printf("Reverse string:");
    for(int c=0;c<MAX;c++)
    {
        printf("%c",pop());
    }
    return 0;
}
