#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    // TOP PART
    for(int i=0;i<n;i++){
        //For initial spaces
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        cout<<"*";
        //for Last spaces
        if (i==0){
            cout<<endl;
            continue;
        } 
        else{
            for(int j=0;j<((2*i)-1);j++){
                cout<<" ";
            }

        }

        
        
        cout<<"*";
        cout<<endl;
    }
    

    // BOTTOM PART 
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        //for Last spaces
        if (i==1){
            cout<<endl;
            continue;
        } 
        else{
            for(int j=0;j<((2*i)-3);j++){
                cout<<" ";
            }

        }

        
        
        cout<<"*";
        cout<<endl;
    }
    return 0;

}

// ----------------OUTPUT------------------
/*
Enter the number :4
   *
  * *
 *   *
*     *
 *   *
  * *
   *
   
   */