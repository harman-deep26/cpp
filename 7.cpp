#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
int m=1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        cout<<m<<" ";
        m=m+2;
    } 
    cout<<endl;
    }
    return 0;
}