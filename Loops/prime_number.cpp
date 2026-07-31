#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for (int i =2;i<n;i++){
        if(n%i==0){
            count++;
        }

    }
    if (count>0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";

    }
    return 0;
}

// ------------------OUTPUT---------------------
/*

Enter the number :9
Not Prime

Enter the number :2
Prime

*/