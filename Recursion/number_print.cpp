#include<iostream>
using namespace std;
void print_numbers(int n){
    if(n==1){
        cout<<1;
        return ;
    }
    cout<<n<<" ";
    print_numbers(n-1);
}
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    print_numbers(n);
}

//-----------------OUTPUT-------------------
/*
Enter a number : 5
5 4 3 2 1

*/