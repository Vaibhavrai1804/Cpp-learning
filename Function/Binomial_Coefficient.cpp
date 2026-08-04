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

int calculate_ncr(int n,int r){
    int result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

int main(){
    int n,r;
    cout<<"Enter value of n :";
    cin>>n;
    cout<<"Enter value of r :";
    cin>>r;
    cout<<"Binomial Coefficient for these value is : "<<calculate_ncr(n,r);
    return 0;
}

// -----------------------OUTPUT------------------------
/*
Enter value of n :8
Enter value of r :2
Binomial Coefficient for these value is : 28


Enter value of n :6
Enter value of r :3
Binomial Coefficient for these value is : 20

*/