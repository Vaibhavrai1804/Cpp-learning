#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority_element(vector<int> nums){
    sort(nums.begin(),nums.end());
    int freq=1,ans=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];

        }
        if(freq==(n/2)){
        return ans;
        }
    
    
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,2,1,1};
    int result=majority_element(nums);
    cout<<"Majority Element is : "<<result;
    return 0;

}

// --------------------OUTPUT-----------------------
/*

Majority Element is : 1

*/