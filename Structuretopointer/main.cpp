#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle *p;
    p = new struct Rectangle;
    cout<<"Enter the length: ";
    cin>>p->length;
    cout<<endl;
    cout<<"Enter the breadth: ";
    cin>>p->breadth;
    cout<<endl;
    cout<<"The area of the rectangle is : "<<p->length*p->breadth<<endl;
    delete  p;
    
}