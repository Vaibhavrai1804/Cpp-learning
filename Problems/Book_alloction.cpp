#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr,int n,int m,int mid){ //time complexity O(n)
    int stu=1,pages=0;
    for(int i=0;i<=n;i++){
        if(arr[i]>mid){
            return false;

        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=arr[i];
        }
    }
    if(stu>m){
        return false;
    }
    else{
        return true;
    }

}
int allocatebooks(vector<int> &arr ,int n,int m){
    if (m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){ //time complexity O(n)
        sum+=arr[i];

    }
    int ans=-1;
    int st=0,end=sum;
    while(st<=end){             // time complexity O(logN) N : Range of st and end
        int mid=st+(end-st)/2;
        if (isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            st=mid+1;
        }
    }
    return ans;

}



int main(){
    vector<int> arr={2,1,3,4};
    int n =4,m=2;
    cout<<allocatebooks(arr,n,m)<<endl;
    return 0;


}

// overall time complexity O(logN*n)

// ----------------OUTPUT----------------------
//6