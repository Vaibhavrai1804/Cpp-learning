#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    
    int b;
    cout<<"Enter Second number : ";
    cin>>b;
    
    int gcd=1;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout<<"GCD : "<<b;
    }
    else{
        cout<<"GCD : "<<a;

    }
}

// ---------------------OUTPUT-------------------
/*
Enter first number : 20
Enter Second number : 28
GCD : 4


Enter first number : 6
Enter Second number : 12
GCD : 6

Enter first number : 0
Enter Second number : 11
GCD : 11

*/