#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
int x;
    for(int i=1;i<=n;i++){
        x=i;
       for(int j=1;j<=n;j++){
        cout<<x<<" ";
        x++;
    } 
    cout<<endl;
    }
    return 0;
}