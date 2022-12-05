#include <iostream>

using namespace std;
struct Complex{
    int real;
    int img;
}c1,c2;

int main(){
        cout<<"Enter the 1st real number :";
        cin>>c1.real;
        cout<<"Enter the 1st imaginary number :";
        cin>>c1.img;
        cout<<"Enter the 2st real number :";
        cin>>c2.real;
        cout<<"Enter the 2st imaginary number :";
        cin>>c2.img;
        cout<<"The first complex number is "<<c1.real<<" + "<<c1.img<<"i"<<endl;
        cout<<"The second complex number is "<<c2.real<<" + "<<c2.img<<"i"<<endl;
        int add1 = c1.real+c2.real;
        int add2 = c1.img+c2.img;
        int sub = c1.real-c2.real;
        int sub1 = c1.img-c2.img;
        cout<<"Addition of Complex number is : "<<add1<<"  + "<<add2<<"i"<<endl;
        cout<<"Substraction of Complex number is : "<<sub<<"  - "<<sub1<<"i"<<endl;
}