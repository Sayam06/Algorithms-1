#include <iostream>
using namespace std;     
 
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]),temp=0,start=0,end=n-1; 
     
    while (start < end){
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
     
    cout << "Reversed array is :" << endl;
     
    for (int i = 0; i < n; i++)
        cout << arr[i];
     
    return 0;
}