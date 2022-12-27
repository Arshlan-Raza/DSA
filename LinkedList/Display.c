#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr!=NULL){
        printf("Element are :%d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node *head ;
    struct Node *second;
    struct Node *third ;
    struct Node *fourth ;

    head = (struct Node *)malloc (sizeof (struct Node));
    second =  (struct Node *)malloc (sizeof (struct Node));
    third = (struct Node *)malloc (sizeof (struct Node));
    fourth = (struct Node *)malloc (sizeof (struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;
    display(head);
    free(head);
    free(second);
    free(third);
    free(fourth);
    return 0;
}
