#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter Number of rows :";
    cin>>row;
    int column;
    cout<<"Enter Number of columns :";
    cin>>column;
    int matrix[row][column];
    cout<<"Enter elements : ";

    //Taking input from user
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }

    //Print user's array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}


// -----------------------OUTPUT----------------------
/*

Enter Number of rows :4
Enter Number of columns :3
Enter elements : 1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 
4 5 6 
7 8 9 
10 11 12 

*/