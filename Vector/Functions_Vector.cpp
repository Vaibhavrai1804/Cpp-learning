#include<iostream>
#include<vector> //For vector 
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<"Before adding new value"<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

    // Push_back
    // Add 6 and 7
    vec.push_back(6);
    vec.push_back(7);
    cout<<"After adding new value"<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
    cout<<vec[5]<<endl;
    cout<<vec[6]<<endl;

    // Pop_back
    // Delete 6 and 7
    vec.pop_back();
    vec.pop_back();
    cout<<"After deleting 6 and 7"<<endl;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

    // Accessing First element of vector
    cout<<"First element :"<<vec.front()<<endl;

    // Accessing last element of vector
    cout<<"Last element :"<<vec.back()<<endl;

    // Accessing 3rd index element
    cout<<"Element at 3rd index : "<<vec.at(3);

    return 0;
}

// ---------------------OUTPUT-----------------------
/*
Before adding new value
1
2
3
4
5
After adding new value
1
2
3
4
5
6
7
After deleting 6 and 7
1
2
3
4
5
First element :1
Last element :5
Element at 3rd index : 4

*/




