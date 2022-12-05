#include <iostream>

using namespace std;

int sumOfNatural(int n){
//     int sum=0;
    if(n>0){
        return sumOfNatural(n-1)+n;
    }
    
    return 0;
}

int main(){
    
    int x{0};
//    int res = 0;
    cout<<"Enter n number: ";
    cin>>x;
//    res=res+sumOfNatural(x);
    cout<<sumOfNatural(x);
}