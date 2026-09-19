#include<iostream>
using namespace std;
int main(){
    // Character array 
    // char str[]={'a','e','i','o','\0'};
    // cout<<str<<endl;

    // TAKING INPUT FROM USER 
    // char str_2[100];
    // cout<<"Enter a string :";
    // cin>>str_2;
    // cout<<"OUTPUT : "<<str_2;

    // ------------OUTPUT------------
    /*
    Enter a string :Hello world
    OUTPUT : Hello

    cin ignores the space and return hello only
    */

    //That's why we choose cin.getline(str,size,delim)
    
    // char str_3[100];
    // cout<<"Enter a string :";
    // cin.getline(str_3,100);
    // cout<<"Output :"<<str_3;
    // -----------OUTPUT---------------
    /*
    Enter a string :Hello World 
    Output :Hello World 
    */

    //Using a delimeter 
    // char str_3[100];
    // cout<<"Enter a string :";
    // cin.getline(str_3,100,'$'); //when $ occur compiler stops traverse 
    // cout<<"Output :"<<str_3;

    // ---------------OUTPUT-----------------------
    /*
    
    Enter a string :Hello Worl$d
    Output :Hello Worl

    */

    // char str_4[20];
    // cout<<"Enter a string :";

    // cin.getline(str_4,20);
    // for(char val:str_4){
    //     cout<<val;
    // }
    //---------------OUTPUT--------------
    /*
    Enter a string :hello
    hello└╠!v\╘g⌐■
    */

    //length of string

    // char str_5[]="Dsa";
    // int len=0;
    // for(int i=0;i<str_5[i]!='\0';i++){
    //     len++;
    // }

    // cout << "Length of string : "<<len;

    //----------------OUTPUT-----------------
    /*

    Length of string : 3
    
    */

    //STRING 

    // string str="Hello world";
    // cout<<str<<endl;
    // str="Hello world from India";
    // cout<<str;

    //--------------OUTPUT----------------
    /*
    Hello world
    Hello world from India
    */

    //1.) + == combines two string 
    string str_1="hello";
    string str_2="world";
    string str_3=str_1+str_2;
    cout<<"String 1 : "<<str_1<<endl;
    cout<<"String 2 : "<<str_2<<endl;
    cout<<"String 3 : "<<str_3<<endl;

    //-------------OUTPUT--------------
    /*
    String 1 : hello
    String 2 : world
    String 3 : helloworld
    */
}