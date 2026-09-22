#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Digits are :"<<endl;
    int sum=0;
    
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        
        cout<<rem<<endl;
        n=n/10;
    }
    cout<<"Sum of digits are "<<sum;
}