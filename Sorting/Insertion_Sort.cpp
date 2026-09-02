#include<iostream>
#include<vector>
using namespace std;

void Insertion_Sort(vector<int> & nums){
    int n=nums.size();
    for(int i=1;i<n;i++){ 
        int curr=nums[i],prev=i-1;             // Time Complexity : O(n**2)
        while(prev>=0 && nums[prev]>curr){
            nums[prev+1]=nums[prev];
            prev--;
        }
        nums[prev+1]=curr;
    }    

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}



int main(){
    vector<int> nums={4,1,5,2,3};
    
    Insertion_Sort(nums);
    return 0;
}

// ------------------OUTPUT---------------------
//  1 2 3 4 5 