#include<iostream>
using namespace std;
void prime(int n){
    int count=0;
    for(int i= 2;i<n;i++){
        if (n%i==0){
            count+=1;
        }
    }
    if (count==0){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";

    }
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    prime(n);
    return 0;
}

// ---------------OUTPUT------------------
/*

Enter a number :5
5 is prime

Enter a number :10
10 is not prime

*/