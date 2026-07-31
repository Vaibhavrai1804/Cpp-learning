#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    if (ch>='a'&&ch<='z'){
        cout<<"lowercase";
    }
    else{
        cout<<"Uppercase";

    }
    return 0;
}


// ---------------OUTPUT-----------------
/*

Enter character : Q
Uppercase

Enter character : q
lowercase
*/