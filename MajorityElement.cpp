#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int freq=0,ans=0;
    for(int i:nums){
        if(freq==0){
            ans=i;
        }
        if(ans==i){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"The majority element is : ";
    cout<<ans<<endl;
    return 0;
}
