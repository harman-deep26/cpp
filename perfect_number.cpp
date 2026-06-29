#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<n<<" is a Perfect number";
    }
    else{
        cout<<n<<" is not a perfect number.";
    }
    return 0;
}
