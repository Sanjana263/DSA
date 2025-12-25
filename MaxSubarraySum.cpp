#include<iostream>
#include<vector>
using namespace std;
#include<climits>

// Max Subarray by using Kadane's algorithm

int main(){
  int arr[10];
  int n;
  int current_sum=0;
  int max_sum=INT_MIN;
  cout<<"Enter the number of element"<<endl;
  cin>>n;
  cout<<"Enter the elements"<<endl;  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){
    current_sum = current_sum + arr[i];
    max_sum = max(current_sum,max_sum);
    if(current_sum<0){
        current_sum=0;
    }
  }

  cout<<max_sum;
    
}
