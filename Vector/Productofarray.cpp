#include<iostream>
#include<vector>
using namespace std;
vector<int> Product(vector<int> & nums ){
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int pdt=1;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                pdt=pdt*nums[j];
            }
        }
        ans.push_back(pdt);
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans=Product(nums);
    cout<<ans[0]<<" ";
    cout<<ans[1]<<" ";
    cout<<ans[2]<<" ";
    cout<<ans[3];
}

// ------------OUTPUT------------
/*

24 12 8 6

*/