#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> num,int n ){
    if(n==1){
        return true;
    }
    else if(num[n-1]>=num[n-2]){
        return isSorted(num,n-1);
    }
    else{
        return false;
    }
      
}
int main(){
    vector<int> num={1,2,8,4,5};
    int n =num.size();
    if(isSorted(num,n)){
        cout<<"Yes the array is sorted";
    }
    else{
        cout<<"No the array is not sorted";

    }

}
//---------------------OUTPUT-------------------------
/*

No the array is not sorted

*/