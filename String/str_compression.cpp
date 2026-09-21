#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool present(vector<char> & new_char,char ele){
    for(int i=0;i<new_char.size();i+=2){
        if(new_char[i]==ele){
            return true;
        }
    }
    return false;
}
void position(vector<char>  & new_char,char ele){
    for(int i=0;i<new_char.size();i+=2){
        if(new_char[i]==ele){
            int count=(new_char[i+1]-'0')+1;
            new_char[i+1]=char(count+'0');
        }
    }

}
int compress(vector<char> & chars){
    int size_1=chars.size();
    vector<char> new_char;
    for(int i=0;i<size_1;i++){
        if(i==0){
            new_char.push_back(chars[i]);
            new_char.push_back('1');

        }
        else{
            if(!present(new_char,chars[i])){
                new_char.push_back(chars[i]);
                new_char.push_back('1');
            }
            else{
                position(new_char,chars[i]);//5
            }
        }

    }
    return new_char.size();
}
int main(){
    vector<char> chars={'a','b','c','a','b','c'};
    int length=compress(chars);
    cout<<"length of comprised string is : "<<length;

};

//------------------------OUTPUT-----------------------
/*

length of comprised string is : 6

*/