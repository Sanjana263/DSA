#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of element"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int max_profit=INT_MIN;
    int best_buy=nums[0];
    for(int i:nums){
        if(i+1>best_buy){
            max_profit= max(max_profit,i+1-best_buy);
        }
        best_buy= min(best_buy,i+1);
    }

    cout<<"Maximum profit is : "<<max_profit<<endl;

}
