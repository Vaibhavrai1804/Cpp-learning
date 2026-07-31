#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num>=0){
        cout<<num<<" is positive"<<endl;
    } 
    else {
        cout<<num<<"is negatiive"<<endl;

    }
    return 0;
}

//----------OUTPUT------------
/*
Enter the number:40
40is positive

Enter the number:-90
-90is negatiive

*/