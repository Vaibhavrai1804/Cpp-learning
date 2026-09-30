#include<iostream>
using namespace std;
int sum(int n){
    int total=0;
    if(n==0){
        return 0;
    }
    total=n+sum(n-1);

}
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    int total=sum(n);
    cout<<"Sum : "<<total;

}

//------------------------OUTPUT---------------------
/*

Enter a number : 10
Sum : 55

*/