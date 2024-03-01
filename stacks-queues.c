#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>

int push(int ele)
{
    int stack[100];
int top=-1;
top++;
stack[top] = ele;
}

int pop(int ele)
{   
int stack[100];
   int top;
   if(top==-1)
   printf("Underflow");
   else
   ele = stack[top];
   top--;
}

int main()
{
  int ele;
   push(3);
   pop(4);
}