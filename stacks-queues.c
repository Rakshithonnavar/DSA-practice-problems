#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define  MAX 100

int stack[100];
int top=-1;
void push(int ele)
{
   if(top==MAX-1)
   {
      printf("Stack Overflow");
   }
   else{
top++;
stack[top] = ele;
}
}

void pop(int ele)
{   
   if(top==-1){
   printf("Underflow");
   return -1;
   }
   else{
   ele = stack[top];
   top--;
   return ele;
}
}


int main()
{
  int ele;
   push(3);
   push(4);
   push(5);
   push(4);
   // printf("%d",stack[top]);
   return 0;
}