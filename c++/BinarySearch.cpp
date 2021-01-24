
int binarySearch(int arr[], int l, int u, int x) 
{ 
    if (u >= l) { 
        int mid = l + (u - l) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, u, x); 
    } 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 12, 30, 43, 50, 82,92,100 }; 
    int x = 30; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 