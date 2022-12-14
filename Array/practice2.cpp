#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int *s;
    s = new int [n];
    cout<<"Enter the elements "<<endl;
    for(int i = 0;i<n;++i){
        cin>>s[i];
    }
    cout<<"The array elements are :"<<endl;
      for(int i = 0;i<n;++i){
       cout<<s[i]<<endl;
    }
    delete []s;
    return 0;
}