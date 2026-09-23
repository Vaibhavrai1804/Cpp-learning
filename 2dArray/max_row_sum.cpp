#include<iostream>
using namespace std;
int main(){
    //Implementation of 2d array 
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int column=3;
    int max_sum=0;

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum+=matrix[i][j];   

        }
        max_sum=max(max_sum,sum);
    }
    cout<<"Maximum sum is : "<<max_sum;
}