#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    } 
    else {
        cout<<num<<"is odd"<<endl;

    }
    return 0;
}

// ------------OUTPUT-----------------
/*
Enter the number:12
12 is even

Enter the number:17
17is odd

*/