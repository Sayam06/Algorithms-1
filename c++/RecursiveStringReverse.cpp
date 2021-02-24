#include<iostream>
using namespace std;

void rev(string str){
    if(str.length() == 0)
        return;

    rev(str.substr(1));
    cout<<str[0];
}

int main(){
    string str = "Algorithms";
    rev(str);
    return 0;
}
