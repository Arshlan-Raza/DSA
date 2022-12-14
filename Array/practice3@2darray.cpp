#include<iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"Number of rows?";
    cin>>n;
    cout<<"NUmber of columns?";
    cin>>m;
    int *a[n];
    // a = new int [n];
    for(int i=0;i<n;++i){
        a[i] = new int[m];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<"Enter the "<< i <<" element of "<<j<< " row "<<endl;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<a[i][j];
            
        }
        cout<<endl;
    }
    delete []a;
}