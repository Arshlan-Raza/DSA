#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 12;
    p->breadth = 44;
}

int main(){
    struct Rectangle *ptr = fun();
    
    cout<<"Length = "<<ptr->length<<endl<<"Breadth = "<<ptr->breadth;
}