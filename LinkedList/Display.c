#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// int display(struct node *);
// int add(struct node *);

struct node{
    int data;
    struct node *next;
    
};
int main(){
    int data;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    while(data!=-1){
        printf("Enter the data:");
        scanf("%d",&data);
        printf("to exit press -1\n");
    }
    
    while(p!=NULL){
        printf("%d",p->data);
        p = p->next;
    }
    free(p);
    
}