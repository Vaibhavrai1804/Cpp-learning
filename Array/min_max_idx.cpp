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
    int min_index=0;
    int max_index=0;
    for(int i=0;i<size;i++){
        // for max 
        if(max<arr_1[i]){
            max=arr_1[i];
            max_index=i;
        }
        // for min
        else if(min>arr_1[i]){
            min=arr_1[i];
            min_index=i;
        }
      
    }
    cout<<"Largest element is "<<max<<" at index "<<max_index<<endl;
    cout<<"Smallest element is "<<min<<" at index "<<min_index;
    return 0;
}

// ---------------------OUTPUT--------------------
/*

Enter Number of elements :5
Enter elements :10 20 30 5 12
Largest element is 30 at index 2
Smallest element is 5 at index 3

*/