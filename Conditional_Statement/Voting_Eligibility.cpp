#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if(age>=18){
        cout<<"Eligible"<<endl;
    } 
    else {
        cout<<"Not Eligible"<<endl;

    }
    return 0;
}

// ----------------OUTPUT--------------------
/* 
Enter the age:16
Not Eligible


Enter the age:19
Eligible

*/