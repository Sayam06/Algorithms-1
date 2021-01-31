#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 0;

    cin>>n;
    bool flag = true;

    if(n <= 1){
        cout<<"Wrong Input";
        return 0;
    }

    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<"Non Prime";
            flag = false;
            break;
        }
    }

    cout<<((flag) ? "Prime Number" : "");

    return 0;
}
   