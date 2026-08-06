#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter number of elements :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    int pdt=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        pdt*=arr[i];
    }
    cout<<"Sum of all numbers in array :"<<sum<<endl;
    cout<<"Prdouct of all numbers in array :"<<pdt;
    return 0;
}


// ----------------OUTPUT-------------------
/*

Enter number of elements :5
Enter elements :10 20 30 40 50
Sum of all numbers in array :150
Prdouct of all numbers in array :12000000

*/

    