#include <iostream>

using namespace std;



int * fun(int n){
        
    int *p;
    p = new int[n];
    for(int i=0;i<n;++i){
        cin>>p[i];
    }
    return p;
}
 
int main(){
    int b;int *ptr;
    cout<<"Enter the size of array : ";
    cin>>b;
    ptr = fun(b);
    cout<<"The array elements are : ";
    for (int i=0;i<b;++i){
        cout<<ptr[i];
    }
}