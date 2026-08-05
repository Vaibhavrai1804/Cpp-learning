#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int pow=1;
    int num;
    int rem;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        rem=num%2;
        num/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout<<"Binary of "<<num<<" is :"<<ans;
    return 0;

}

// ---------------------OUTPUT-------------------
/*
Enter a number: 6
Binary of 0 is :110

Enter a number: 42
Binary of 0 is :101010*/