#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr,int n,int m,int mid){ //time complexity O(n)
    int painter=1,time=0;
    for(int i=0;i<=n;i++){
        if(arr[i]>mid){
            return false;

        }
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;

}
int painter_partition(vector<int> &arr ,int n,int m){
    if (m>n){
        return -1;
    }
    int sum=0 ,max_length= 0;
    for(int i=0;i<n;i++){ //time complexity O(n)
        sum+=arr[i];
        max_length=max(max_length,arr[i]);

    }
    
    int st=max_length,end=sum,ans=-1;
    
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
    vector<int> arr={40,30,10,20};
    int n =4,m=2;
    cout<<painter_partition(arr,n,m)<<" minutes"<<endl;
    return 0;


}

// ------------------------OUTPUT--------------------------
// 60 minutes