#include<iostream>
using namespace std;
int main(){
    // take input of array size
    int size;
    cout<<"Enter Number of elements :";
    cin>>size;
    int arr_1[size];
    cout<<"Enter elements :";
    for(int i=0;i<size;i++){
        cin>>arr_1[i];
    }
    int min=arr_1[1];
    int max=arr_1[1];
    for(int i=0;i<size;i++){
        // for max 
        if(max<arr_1[i]){
            max=arr_1[i];
        }
        // for min
        else if(min>arr_1[i]){
            min=arr_1[i];
        }
      
    }
    cout<<"Largest element is :"<<max<<endl;
    cout<<"Smallest element is :"<<min;
    return 0;
}

// -----------------------OUTPUT-------------------------
/*
Enter Number of elements :5
Enter elements :1 2 3 4 5
Largest element is :5
Smallest element is :1


Enter Number of elements :6
Enter elements :-1 -2 -3 -4 -5 -6
Largest element is :-1
Smallest element is :-6

*/