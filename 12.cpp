#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
       for(int j=1;j<=n;j++){
        cout<<x<<" ";
        x=x+5;

    } 
    cout<<endl;
    }
    return 0;
}