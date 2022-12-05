#include <iostream>

using namespace std;
int n=0;
int fun(int x){
//    static 
    if(x>0){
        n++;
        return fun(x-1)+n;
    }
    return 0;
}

main(){
    int y;
    cout<<"Enter the number : ";
    cin>>y;
    cout<<fun(y);
}

