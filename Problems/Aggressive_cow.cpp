#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> &stall,int n ,int c,int mid){
    int cow=1,last_stallpos=stall[0];
    for(int i=1;i<n;i++){
        if((stall[i]-last_stallpos)>=mid){
            cow++;
            last_stallpos=stall[i];
        }
        if(cow==c){
            return true;
        }

    }
    return false;
}

int max_cow_dist(vector<int> &stall,int n ,int c){
    sort(stall.begin(),stall.end());
    int st=1 , end=stall[n-1]-stall[0];
    int ans=1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(stall,n,c,mid)){ //right
            st=mid+1;
            ans=mid;
        }
        else{ //left
            end=mid-1;

        }

    }
    return ans;

}

int main(){
    vector<int> stall={1,2,4,8,9};
    int n=5,c=3;
    cout<<max_cow_dist(stall,n,c)<<endl;
    return 0;

}


// ----------------------OUTPUT--------------------------
//  3