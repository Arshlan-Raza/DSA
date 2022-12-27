#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;

};

struct Node *insertAtBegining(struct Node *head,int data){
    struct Node *ptr;
    ptr = (struct Node *)  malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
    free(ptr);
}

struct Node *insertAtIndex(struct Node *head,int data,int index){
    struct Node *ptr ;
    ptr =  (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
   
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    free(ptr);


}

struct Node *insertAtEnd(struct Node *head ,int data){
    struct Node *ptr;
    struct Node *p = head;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node *insertAfter(struct Node *head,struct Node *prevnode,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevnode->next;
    return head;
}

void display (struct Node *ptr){
    while(ptr!=NULL){
        printf("ELmentes are : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node *head,*second,*third,*fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data =1;
    head->next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    printf("Values before Insertion\n");
    display(head);

    head = insertAtBegining(head,11);
    printf("Values After Insertion B\n");
    display(head);
    head = insertAtIndex(head,12,3);
    printf("Values after Insertion at index\n");
    display(head);
    head = insertAtEnd(head,30);
    printf("Values after insertion at end\n");
    display(head);
    head = insertAfter(head,second,20);
    printf("Values after insertion at of node d\n");
    display(head);
    free(head);
    free(second);
    free(third);
    free(fourth);


    
}