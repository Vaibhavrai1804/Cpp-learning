#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j>0;j--){
            char ch='A';
            ch=ch+(j-1);
            cout<<ch<<" ";
            
            
        }
        cout<<endl;
    }
    return 0;
}


// ----------------------OUTPUT------------------
/*

Enter the number :4
A 
B A 
C B A 
D C B A 
*/