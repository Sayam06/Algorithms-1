#include<iostream>
using namespace std;

#define MAX 1000

class Stack{
    int top;
    public:
    Stack(){
        top=-1;
    }
    int arr[MAX];

    void push(int x){
        if(top < MAX)
            arr[++top] = x;
        else
            cout<<"Stack Overflow!!";
    }

    int pop(){
        if(top >= 0){
            return arr[--top];
        }else{
            cout<<"Stack Underflow!!";
            return 0;
        }
    }
};

int main(){
    class Stack st;
    st.push(4);
    cout<<st.pop();
    return 0;
}