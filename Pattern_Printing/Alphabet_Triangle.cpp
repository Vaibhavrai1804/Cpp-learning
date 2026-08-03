#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    char ch='A';
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<ch<<" ";
           
            
        }
        ch++;
        cout<<endl;
    }
    return 0;
}


// -----------OUTPUT-----------------
/*

Enter the number :3
A 
B B 
C C C

Enter the number :4
A 
B B 
C C C 
D D D D */