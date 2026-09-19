#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string str_1; 
    cout<<"Enter a string : ";
    getline(cin,str_1);
    transform(str_1.begin(),str_1.end(),str_1.begin(),::tolower);
    int st=0;
    bool flag=true;
    int end=str_1.size()-1;
    while(st<end){
        if(str_1[st]==str_1[end]){
            st++;
            end--;
        }
        else{
            cout<<"Not Palindrome";
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palindrome";
    }


    
}

// ---------------OUTPUT-----------------
/*
Enter a string : Racecar
Palindrome

Enter a string : Huuh           
Palindrome

Enter a string : Hello
Not Palindrome

*/