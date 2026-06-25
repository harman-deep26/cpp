#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n:";
cin>>n;
    for(int i=1;i<=n;i++){
       int x=1;
       for(int j=1;j<=n;j++){
        if(j%2!=0){
            cout<<x<<" ";
            x++;
        }
        else{
            cout<<i<<" ";
        }
    } 
    cout<<endl;
    }
    return 0;
}
