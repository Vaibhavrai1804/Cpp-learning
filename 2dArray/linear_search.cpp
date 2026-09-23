#include<iostream>
using namespace std;
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int column=3;

    int key=5;
    bool flag=false;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]==key){
                flag=true;
                
            }
        }
    }
    if(flag){
        cout<<"Element is present ";
    }
    else{
        cout<<"Element is not present";

    }
}