#include<iostream>
#include<vector>
using namespace std;

void Selection_Sort(vector<int> & nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){ 
        int smallest_idx=i;             // Time Complexity : O(n**2)
        for(int j =i+1;j<n;j++){
            if(nums[j]<nums[smallest_idx]){
                smallest_idx=j;
            }
       
            
        }
        swap(nums[i],nums[smallest_idx]);
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}



int main(){
    vector<int> nums={4,1,5,2,3};
    
    Selection_Sort(nums);
    return 0;
}


// ------------------OUTPUT---------------------
//  1 2 3 4 5 