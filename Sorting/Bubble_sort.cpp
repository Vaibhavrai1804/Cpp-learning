#include<iostream>
#include<vector>
using namespace std;

void Bubble_Sort(vector<int> & nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){ 
        bool isswap=false;             // Time Complexity : O(n**2)
        for(int j =0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]) ;
                isswap=true;
            }
       
            
        }
        if(isswap==false){  //Already Sorted
            break; 
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums={4,1,5,2,3};
    
    Bubble_Sort(nums);
    return 0;
}


// ------------OUTPUT---------------
//  1 2 3 4 5 