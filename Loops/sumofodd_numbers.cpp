#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"Sum is :"<<sum;
    return 0;

}


// ---------------------OUTPUT-------------------
/*
Enter the number :10
Sum is :25
*/