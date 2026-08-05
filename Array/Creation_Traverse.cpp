#include<iostream>
using namespace std;
int main(){
    //Creation 
    int Array_1[5]={1,2,3,4,5};

    // Accessing without loop
    cout<<Array_1[0]<<endl;
    cout<<Array_1[1]<<endl;
    cout<<Array_1[2]<<endl;
    cout<<Array_1[3]<<endl;
    cout<<Array_1[4]<<endl;


    // Traverse with loop

    for(int i=0;i<5;i++){
        cout<<Array_1[i]<<" ";
    }
    return 0;
}


// -----------------OUTPUT---------------------
/*
Without loop
1
2
3
4
5

With loop
1 2 3 4 5 

*/