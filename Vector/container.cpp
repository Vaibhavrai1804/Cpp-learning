#include<iostream>
#include<vector>
using namespace std;
int maxarea(vector<int>& height){
    int n=height.size();
    int max_area=0;
    for(int i=0;i<n;i++){
        int width=0;
        for(int j=i+1;j<n;j++){
            int length=min(height[i],height[j]);
            int area=length*width;
            max_area=max(max_area,area);
            width++;
        }
    }
    return max_area;
}
int main(){
    vector<int>height={0,2};
    int ans=maxarea(height);
    cout<<"Maximum water a conatiner can contain :"<< ans;
}