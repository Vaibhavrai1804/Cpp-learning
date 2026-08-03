#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        char ch = 'A';  
        for(int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}


// --------------------OUTPUT-----------------------
/*

Enter the number : 5
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

*/