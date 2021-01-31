#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 0;
    cin>>n;
    bool flag = true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<"Non Prime";
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"Prime Number";
    }
    return 0;
}
   