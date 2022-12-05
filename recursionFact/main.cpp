#include <iostream>

using namespace std;

int fact(int n){
//     int sum=0;
    if(n==0)
         return 1;  
    else
       return fact(n-1)*n;
    
    
                             
}

int main(){
    
    int x{0};
//    int res = 0;
    cout<<"Enter n number: ";
    cin>>x;
//    res=res+sumOfNatural(x);
    cout<<fact(x);
}