#include <iostream>

using namespace std;

void fun1(int x){
    if(x>0){
        fun1(x-1);
        cout<<x<<" , ";
        
    }
}

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    fun1(n);
    return 0;
}
