#include<iostream>
using namespace std;
int main(){
    int nums[]={1,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    int min=nums[0],max=nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]<min){
            min=nums[i];
        }
        if(nums[i]>max){
            max=nums[i];
        }
    }
    for(int i=min;i<=max;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i){
                found=1;
                break;
            }
        }
        if(!found){
            cout<<i<<endl;
        }
    }
    return 0;
}