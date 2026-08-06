#include<iostream>
using namespace std;
int linear_search(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;  //Not found 

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

    int target;
    cout<<"Enter desired element :";
    cin>>target;
    cout<<"Index :"<<linear_search(arr,target,size);
    return 0;

}

// -----------------OUTPUT-------------------
/*
Enter number of elements :2
Enter elements :1 2
Enter desired element :3
Index :-1

Enter number of elements :5
Enter elements :12 13 14 1 2 
Enter desired element :14
Index :2
*/