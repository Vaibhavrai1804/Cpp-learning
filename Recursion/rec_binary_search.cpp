#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> nums,int st,int end,int target){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]>target){
            return binary_search(nums,st,mid-1,target); 
        }
        else if(nums[mid]<target){
            return binary_search(nums,mid+1,end,target);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }
}
int main(){
    vector<int> nums={1,2,3,4,5};
    int st=0;
    int end=nums.size()-1;
    int target=7;
    if(binary_search(nums,st,end,target)==-1){
        cout<<"Target value is not present in the array";
        
    }
    else{
        cout<<"Target value is present in the array at index : "<<binary_search(nums,st,end,target);

    }
}

//---------------------------OUTPUT--------------------------------
/*

i.) Target value =3

Target value is present in the array at index : 2

ii.) Target value =7

Target value is not present in the array
*/