// Cyclically rotate an array by one
#include <iostream>
using namespace std;

int rotate(int arr[],int n){
    int end = arr[n-1];
    
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=end;
    return 0;
}

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    rotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}
