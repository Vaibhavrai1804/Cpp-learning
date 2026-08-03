#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// ----------------OUTPUT-------------------
/*

Enter the number :4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4



Enter the number :5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

*/