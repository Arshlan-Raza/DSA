#include<iostream>

using namespace std;

double e(int x, int n){
    static int p=1, f=1;
    int r;
    if (n==0)
        return 0;
    else {
        e(x,n-1);
        p = p*x;
        f = f*n;
        return 1+p/f;
    }
}

 int main(){
    int x,y;
    cout<<"Enter the value of x and y ";
    cin>>x>>y;
    int res = e(x,y);
    cout<<"The answer is : "<<res;
 }