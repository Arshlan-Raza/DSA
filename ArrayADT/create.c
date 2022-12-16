#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// using namespace std;
// void Insert(struct Array arr ,int n);
// void display1(struct Array arr,int n);

struct Array{
    int *a;
    int size;
    int length;
}arr;

int main(){
        int n;
        printf("Enter the size of array :");
        scanf("%d",&arr.size);
        pritnf("Enter the Number of elments :");
        scanf("%d",&n);
        arr.length=n;
        arr.a = (int *)malloc(arr.size*sizeof(int));
        Insert(arr,n);
        display1(arr,n);
        free(arr.a);
        
}

void Insert(struct Array arr , int n){
    printf("Enter the array elements :\n");
    for(int i=0;i<n;++i){
       scanf("%d",&arr.a[i]);
    }
   
}
 
void display1(struct Array arr,int n){
    printf("The array elements are :\n");
    for(int i=0;i<n;++i){
        scanf("%d",arr.a[i]);
    }
 }