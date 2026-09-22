#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter a number :";
    cin>>num;
    int sum=0;
    int n=num;
    while(n!=0){
        int rem=n%10;
        sum+=(rem*rem*rem);
        
        n=n/10;
    }
    if(num==sum){
        cout<<num<<" is armstrong";
    }
    else{
        cout<<num<<" is not armstrong";

    }

}