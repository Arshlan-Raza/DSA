#include<iostream>
 
using namespace std;

int main(){
    int a[5]{5,4,4,5,6};
    int *p;
    p = a;
    for(int i =0;i<5;i++){
        cout<<*(a+i)<<endl;
    }
}