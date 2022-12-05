#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle *r1){
    int res;
    res = r1->length * r1->breadth;
    return res;
}
int main(){
    struct Rectangle r;
    cout<<"length?";
    cin>>r.length;
    cout<<"breadth?";
    cin>>r.breadth;
        
    cout<<"Area is : "<<area(&r);
}