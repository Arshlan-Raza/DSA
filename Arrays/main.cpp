#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[n]{};
//    int len = sizeof(a)/sizeof(a[0]);
    
    cout<<"Enter the number of elements of array:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The element of array is : "<<endl;
//    for(int i=0;i<n;++i){
//        cout<<a[i]<<endl;
//    }
    for(int y:a){
        cout<<y<<endl;
    }
    return 0;
}