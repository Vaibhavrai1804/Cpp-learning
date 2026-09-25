#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int n=nums.size();

    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i==n-1){
            break;
        }
        else{
            if(nums[i]==nums[i+1]){
                return nums[i];
            }

        }
    }
    return -1;
        
}
int main(){
    vector<int> nums={1,3,3,4,2};
    int repeat=findDuplicate(nums);
    cout<<"Duplicate Element: "<<repeat;
}

// --------------------OUTPUT---------------------
/*

Duplicate Element: 3

*/