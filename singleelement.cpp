#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    for(int y:arr){
        x=x^y;
    }
    cout<<x;
}