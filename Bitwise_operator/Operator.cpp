#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=10;
    // Bitwise and,or,xor
    cout<<" Bitwise & result :"<<(a&b)<<endl;
    cout<<" Bitwise | result :"<<(a|b)<<endl;
    cout<<" Bitwise ^ result :"<<(a^b)<<endl;
    
    // Bitwise left,right shift
    cout<<" Bitwise left shift result(for 4) :"<<(a<<1)<<endl;
    cout<<" Bitwise left shift result(for 10) :"<<(b<<1)<<endl;
    cout<<" Bitwise right shift result(for 4) :"<<(a>>1)<<endl;
    cout<<" Bitwise right shift result(for 4) :"<<(b>>1)<<endl;

    return 0;
}


// ------------------OUTPUT------------------
/*

 Bitwise & result :0
 Bitwise | result :14
 Bitwise ^ result :14
 Bitwise left shift result(for 4) :8
 Bitwise left shift result(for 10) :20
 Bitwise right shift result(for 4) :2
 Bitwise right shift result(for 4) :5
 
 */
