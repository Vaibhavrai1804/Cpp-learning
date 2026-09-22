#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag=false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<n<<" is not prime";
    }
    else{
        cout<<n<<" is prime";

    }

}

//-------------------------OUTPUT--------------------------
/*

Enter a number : 13
13 is prime

Enter a number : 4
4 is not prime

*/