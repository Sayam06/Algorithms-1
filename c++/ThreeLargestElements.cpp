#include <iostream>
using namespace std;
  
int main(){ 
    int arr[] = {1,-4,30,15,20,98,3,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    if (n<3) 
        cout<<"Array Size less than 3"; 
    else{
        int first = INT_MIN,third = INT_MIN,second = INT_MIN;  
        for(int i=0;i<n;i++){  
         
            if (arr[i] > first) {  
                third = second;  
                second = first;  
                first = arr[i];  
            }else if (arr[i] > second){ 
                third = second;  
                second = arr[i];  
            }else if (arr[i] > third)  
                third = arr[i];  
            }  
        }    
    }
    
    cout<<"Elements Are:"<<first<<second<<third;
  
    return 0; 
} 
