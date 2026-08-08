#include<iostream>
#include<vector> //For vector 
using namespace std;
int main(){
    vector<int> vec (3,0);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
  

    // By using for loop 
    for(int i : vec){
        cout<<i<<endl;
    }
    
    
    vector<int> vec2={1,2,3,4,5};
    for(int i: vec2){
        cout<<i<<endl;
    }
    return 0;

}