#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>


//insert node after the given node:
void insertAfter(struct node*prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        printf("The previous node cannot be null");
        return;
    }
    /* allocat new node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    //put the data:
    new_node->data = new_data;
   //making next of new node as previous node:
    new_node->next = prev_node->next;
   //move next of prev node as the new node:
   prev_node->next  = new_node;
}

//inserting node at the end:

void insertEnd(struct node*prev_node,int new node)
{
    if(prev_node=NULL)
    {
        printf("Node cannot be added");
        return 0;
    }
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
}

void append(struct node** head_ref,int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head_ref;
    //put in new data
    new_data->data = new_data;
    //new node going to be last node so make it as null

    new_data->next = NULL;
    //If linked list is empty make new node as head.
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
        }
        //Else traverse till the last node.
        while (last->next != NULL)
        {
            last = last->next;
            }
            //Change the next of last node.
            last->next = new_node;
            return;
}
