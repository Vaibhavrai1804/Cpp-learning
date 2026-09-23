#include<iostream>
using namespace std;
int diagonal_sum(int matrix[3][3],int row,int column){
    int primary=0;
    int secondary=0;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                primary+=matrix[i][j];
            }
            if(i+j==row-1){
                secondary+=matrix[i][j];
            }
        }
    }
    
    if(row%2!=0){
        int common=(row-1)/2;
        return primary+secondary-matrix[common][common];

    }
    return primary+secondary;
}
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int column=3;
    int sum=diagonal_sum(matrix,row,column);
    cout<<"Diagonal sum is : "<<sum;
}