#include <iostream>

using namespace std;

int power(int m,int n){

    if(m==0||n==0)
         return 1;  
    else if(m==0 &&n==1)
        return 0;
    else if(m>0&&n>0)
       return (power(m,(n-1))*m);
    
    return 0;
                             
}

int main(){
    
    int x{0};
    int y{0};
//    int res = 0;
    cout<<"Enter  number: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>y;
//    res=res+sumOfNatural(x);
    cout<<power(x,y);
}