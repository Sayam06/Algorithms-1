#include<iostream>
using namespace std;

int main(){

    int a = 2002, b = 12;

    cout<<"Before Swap :"<<a<<" , "<<b;
    
    //Swaping
    a ^= b;
    b ^= a;
    a ^= b;

    cout<<"After Swap :"<<a<<" , "<<b;

    return 0;

}