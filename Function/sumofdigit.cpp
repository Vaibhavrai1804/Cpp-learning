#include<iostream>
using namespace std;
int sum_digit(int n){
    int rem=0;
    int sum=0;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n/=10;

    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"Sum of digit of "<<num<<" is :"<<sum_digit(num);
    return 0;

}

// ----------------OUTPUT-------------------
/*
Enter a number :253
Sum of digit of 253 is :10

Enter a number :333
Sum of digit of 333 is :9
*/