#include<iostream>
#include<vector>
using namespace std;

// Single Number

int main(){
    int n=5;
    vector<int>nums(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int num=0;
    for(int i : nums){
        num=num^i;
    }

    cout<<"Single number"<<endl;
    cout<<num;

}
