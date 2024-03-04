#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define  size 100
//Stack Implementation using arrays
int stack[100];

int top=-1;
void push(int ele)
{
   if(top==size-1)
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

void display()
{ 
   for(int i=0;i<size;i++)
   {
    printf("%d\n",stack[i]);   
   }
}

//Queue Implementation using arrays:
int queue[size];
int front=-1,count=0, rear=-1;

void display(){
     if(front==-1){
        printf("Queue is Empty");
        return;
     }
     printf("Queue elements:");
      for(int i=front;i<=rear;i++){
         printf("%d",queue[i]);
      }
      printf("\n");
}
void delete()
{

   if(front==-1)
   {
       printf("Underflow");
   }
   
        front++;
      count--;
}

//front and rear should not point same index:
void insert(int ele)
{    
     if(rear==size-1)
     {
      printf("Overflow");
     }
      rear++;
      queue[rear]=ele;
     count++;
}
int main()
{
  int ele,n;
   // push(3);
   // push(4);
   // push(5);
   // push(4);
   // printf("%d",stack[top]);
   // display(stack,n);
   insert(1);
   insert(2);
   insert(3);
   display();
   display();
   return 0;
}

//check for balanced Parentheses:
#define size 100
int stack[size],top=-1;
char brac;
int balanced(char brac)
{
    if(top==size-1){
   printf("stack is full");
   return 1;
   }

   if(brac=='('||brac=='{'||brac=='[')
   { 
       top++;
       stack[top]= brac;
       return 0;
   }
   if(brac==')'||brac=='}'||brac==']')
   {
      if(top==-1)
        printf("stack is empty");
        return 1;
   }
      char match;
        if(brac==')')
           match = '(';
       else if (brac == '}')
            match='{';
       else if (brac==']')
              match = '[';
         if(stack[top] == match)
         {
            top--;
            return 0;
         }
         else{
            return 1;
         }
         return 0;
}
int main() {
    char expr[100];
     printf("Enter the Parentheses:");
    scanf("%s",expr);
    int i;
    for (i = 0; expr[i] != '\0'; i++) {
        if (balanced(expr[i])) {
            printf("Parentheses are not balanced\n");
            return 1;
        }
    }
    if (top == -1)
        printf("Parentheses are balanced\n");
    else
        printf("Parentheses are not balanced\n");
    return 0;
}

//Next Greater element in an array: using stacks.
#define size 100
int stack[100];
int nge[100];
int top=-1;

void push(int ele)
{  
   count=0;
   if(top==size-1)
   {
      printf("Stack overflow");
   }
   else{
   top=top+1;
   stack[top]=ele;
   } 
}

int pop()
{
   int ele;
    if(top==-1)
    {
      printf("Stack is empty");
      return -1;   
    }
    else
    {
      ele = stack[top];
      top--;
      return  ele;
    }
}

int nextGreater(int arr[100],int n)
{

   for(int i=0;i<n;i++)
   {
   while(top!=-1 && arr[i] > arr[stack[top]])
   {
    nge[stack[top]] = arr[i];
    pop;
   }
   push(i);
}
   while(top !=-1)
   {
      nge[stack[top]] =-1;
      pop;
   }
   }


   