#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define  size 100
//Stack Implementation using arrays
int stack[100];
int queue[100];
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

int display(int arr[100],int n)
{
   for(int i=0;i<n;i++)
   {
    printf("%d\n",arr[i]);   
   }
}

//Queue Implementation using arrays:
int front=-1,count=0, rear=-1;;
void delete(int arr[100],int ele)
{

   if(front==-1)
   {
       printf("Queue is empty");
   }
   while(count>=size){    
       queue[front] = ele;
        front++;
      }
      count--;
}

//front and rear should not point same index:
int insert(int arr[100],int ele)
{    
     if(rear==size-1)
     {
      printf("Overflow");
     }
     while(count<=size)
     {
        queue[rear]=ele;
        rear=rear+1; 
     }
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

   return 0;
}