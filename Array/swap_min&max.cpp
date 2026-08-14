#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Number of elements :";
    cin>>size;
    int arr1[size];
    cout<<"Elements :";
    for(int i=0;i<size;i++){
        cin>>arr1[i];

    }
    cout<<"Array before swap :";
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int max_element=arr1[0];
    int max_position=0;
    int min_element=arr1[0];
    int min_position=0;
    for(int i=0;i<size;i++){
        if(max_element<arr1[i]){
            max_element=arr1[i];
            max_position=i;
        }
        else if (min_element>arr1[i]){
            min_element=arr1[i];
            min_position=i;

        }
    }
    arr1[max_position]=min_element;
    arr1[min_position]=max_element;
    cout<<"Array after swapping :";
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }

}

// -------------------------OUTPUT---------------------------
/*
Number of elements :5
Elements :-1 10 12 2 3
Array before swap :-1 10 12 2 3 
Array after swapping :12 10 -1 2 3 


Number of elements :5 
Elements :1 2 3 4 5
Array before swap :1 2 3 4 5 
Array after swapping :5 2 3 4 1 

*/