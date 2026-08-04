#include<iostream>
using namespace std;
int SumofN(int num){
    int sum=0;
    for (int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int val=SumofN(n);
    cout<<"Total sum upto "<<n<<" is :"<<val;
    return 0;
}

// -----------------OUTPUT-----------------------
/*

Enter Number :10
Total sum upto 10 is :55

Total sum upto 15 is :120

*/