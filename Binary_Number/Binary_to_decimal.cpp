#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int pow=1;
    int num;
    int rem;
    cout<<"Enter a binary number: ";
    cin>>num;
    while(num>0){
        rem=num%10;
        num/=10;
        ans+=(rem*pow);
        pow=(pow*2);
    }
    cout<<"Decimal is :"<<ans;
    return 0;

}

// --------------------OUTPUT-------------------
/*

Enter a binary number: 110
Decimal is :6

Enter a binary number: 101010
Decimal is :42
*/