#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    
    int b;
    cout<<"Enter Second number : ";
    cin>>b;
    int gcd;
    int x=a;
    int y=b;
    
   
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        gcd=b;
    }
    else{
        gcd=a;
    }

    int lcm=(x*y)/gcd;
    cout<<"LCM of "<<x<<" and "<<y<<" is : "<<lcm;
}

// --------------------------OUTPUT------------------------
/*

Enter first number : 20
Enter Second number : 28
LCM of 20 and 28 is : 140

*/