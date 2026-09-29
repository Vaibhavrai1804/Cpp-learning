#include<iostream>
using namespace std;
int factorial(int n ){
    int result=1;
    if (n==0){
        return result;
    }
    result=n*factorial(n-1);

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result=factorial(n);
    cout<<"Factorial of "<<n<<" is :"<<result;

}