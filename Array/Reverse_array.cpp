#include<iostream>
using namespace std;
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
     int size;
    cout<<"Enter number of elements :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    cout<<"After reversing array :";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    

}

// ------------------OUTPUT-------------------
/*
Enter number of elements :5
Enter elements :1 2 3 4 5
After reversing array :5 4 3 2 1 
*/