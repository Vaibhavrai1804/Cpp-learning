#include<iostream>
using namespace std;
int main(){
    //Implementation of 2d array 
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int column=3;


    cout<<"10 at index number : "<<matrix[3][0]<<endl; 
    //10 at index number : 10


    //Traverse each element of 2d array row wise 
    cout<<"Traverse the array in row-wise fashion"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j]<<" ";
        }
    }


    //Traverse each element of 2d array column wise 
    cout<<"Traverse the array in row-wise fashion"<<endl;
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<matrix[j][i]<<" ";
        }
    }
}