#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    int arr[10];
    int n,i,target,pair_sum;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    int start=0;
    int end=n-1;
    cout<<"Enter the sorted array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target"<<endl;
    cin>>target;
    while(start<end){
        pair_sum=arr[start]+arr[end];
        if(pair_sum>target){
            end--;
        }
        else if(pair_sum<target){
            start++;
        }
        else{
            nums.push_back(start);
            nums.push_back(end);
            break;
        }
    }
    for(int i: nums){
        cout<<"index"<<i<<endl;
    }

}
