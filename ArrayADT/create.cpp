#include<iostream>

using namespace std;
void InsertElement(struct Array,int n);
void display(struct Array,int n);

struct Array{
    int *a;
    int size;
    int length;
}arr;

int main(){
        int n;
        cout<<"Enter the size of array :";
        cin>>arr.size;
        cout<<"Enter the Number of elments :";
        cin>>n;
        arr.length=n;
        arr.a = new int (arr.size);
        InsertElement(arr,n);
        display(arr,n);
        delete []arr.a;
        
}

void InsertElement(struct Array,int n){
    cout<<"Enter the array elements :";
    for(int i=0;i<n;++i){
       cin>>arr.a[i];
    }
   
}
 
 void display(struct Array,int n){
    cout<<"The array elements are :"<<endl;
    for(int i=0;i<n;++i){
        cout<<arr.a[i]<<endl;
    }
 }