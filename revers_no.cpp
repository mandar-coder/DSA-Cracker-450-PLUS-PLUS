#include <iostream>
using namespace std;
//reversing logic 
int reversarray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
//print array
int printarray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main() {
    //program to reverse an array or string
    int arr[]={1,2,3,4,5,6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr, n);
    
    reversarray(arr,0,n-1);
    printarray(arr, n);
    return 0;
}