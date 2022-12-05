#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
public:
    void initialize(int l,int b){
        length = l;
        breadth = b;
    }
        int area(){
            return length*breadth;
    
    }
        int perimeter(){
            return 2*(length+breadth);
    }
};

int main(){
        
        Rectangle r;
        int a,b;
        cout<<"Enter the length :"<<endl;
        cin>>a;
        cout<<"Enter the breadth :"<<endl;
        cin>>b;
        r.initialize(a,b);
        int are = r.area();
        int per = r.perimeter();
        cout<<"Area = "<<are<<endl;
        cout<<"Perimeter ="<<per<<endl;
}