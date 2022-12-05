#include <iostream>

using namespace std;
void swap(int &, int &);

int main(){
    int a,b;
    cout<<"What's the value of a : ";
    cin>>a;
    cout<<"What's the value of b : ";
    cin>>b;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    
    
}

void swap(int &x, int &y){
    int temp;
    temp = x ;
    x = y ; 
    y = temp;
    
}
    