#include<iostream>
using namespace std;

int main(){

    int a = 5, b = 3;

    cout<<"Before Swap :"<<a<<" , "<<b;
    
    //Swaping
    a ^= b;
    b ^= a;
    a ^= b;

    cout<<"After Swap :"<<a<<" , "<<b;

    return 0;

}