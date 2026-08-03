#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<i+1;j++){
            cout<<num<<" ";
            num++;
            
        }
        cout<<endl;
    }
    return 0;
}


// ---------------OUTPUT-------------------
/*

Enter the number :3
1 
1 2 
1 2 3 

Enter the number :4
1 
1 2 
1 2 3 
1 2 3 4 
*/