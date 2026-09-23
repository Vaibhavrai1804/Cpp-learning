#include<iostream>
using namespace std;
int diagonal_sum(int matrix[3][3],int row,int column){
    int primary=0;
    int secondary=0;
    for(int i=0;i<row;i++){
        primary+=matrix[i][i];
        secondary+=matrix[i][row-1-i];
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

// -----------------------OUTPUT------------------------------
/*

Diagonal sum is : 25

*/