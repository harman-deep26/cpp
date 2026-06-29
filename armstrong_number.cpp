#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum=0;
    int temp=n;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    if(sum==n){
        cout<<"Armstrong number.";
    }
    else{
        cout<<" Not an Armstrong number.";
    }
    return 0;
}