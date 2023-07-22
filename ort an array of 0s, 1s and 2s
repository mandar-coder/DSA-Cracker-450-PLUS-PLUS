// Sort an array of 0s, 1s and 2s
#include <iostream>
using namespace std;

void sort123(int arr[],int n){
    int low=0;
    int mid=0;
    int hih=n-1;
    while(mid <= hih){
      switch(arr[mid]){
        case 0 :
          swap(arr[low++],arr[mid++]);
          break;
        case 1:
          mid++;
          break;
        case 2:
            swap(arr[mid],arr[hih--]);
            break;
      } 
    }
}

void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main() {
    int arr[]={1,0,2,2,1,0,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort123(arr,n);
    printarray(arr, n);
    return 0;
}
