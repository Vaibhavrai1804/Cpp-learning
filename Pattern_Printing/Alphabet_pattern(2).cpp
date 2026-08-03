#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    char ch = 'A'; 

    for(int i = 0; i < n; i++) {
          
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}


// -----------------------------OUTPUT-------------------------
/*
Enter the number : 3
A B C 
D E F 
G H I 

Enter the number : 4
A B C D 
E F G H 
I J K L 
M N O P */