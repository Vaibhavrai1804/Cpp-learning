#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    if (n==0 || n==1){
        fact=1;
    }
    else{
        for (int i=1;i<=n;i++){
            fact*=i;
        }
        

    }
    return fact;

    
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int val=factorial(num);
    cout<<"Factorial of "<<num<<" is :"<<val;
    return 0;
}


// --------------OUTPUT----------------
/*

Enter a number :0
Factorial of 0 is :1

Enter a number :4
Factorial of 4 is :24*/