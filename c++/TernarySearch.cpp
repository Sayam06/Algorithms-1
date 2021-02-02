#include <iostream>
using namespace std;

int ternary(int l, int r, int x, int arr[]){
    if (r >= l) {
 
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        if (arr[mid1] == x || arr[mid2] == x) {
            return x;
        }
        
        if (x < arr[mid1]) {
            return ternary(l, mid1 - 1, x, arr);
        }
        else if (x > arr[mid2]) {
            return ternary(mid2 + 1, r, x, arr);
        }
        else {
            return ternary(mid1 + 1, mid2 - 1, x, arr);
        }
    }
 
    return -1;
}
 
int main(){ 

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };   
    int l=0, r=11, x=12;
 
    int res = ternary(l, r, x, arr);

    if(res != -1)
        cout<<x<<" is present at index: "<< res;
    else
        cout<<x<<" is not present";

    return 0;
}
 