#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum upto "<<n<<" numbers is :"<<sum;
    return 0;

}


// ---------------------OUTPUT-------------------
/*
Enter the number :10
Sum upto 10numbers is :55
*/