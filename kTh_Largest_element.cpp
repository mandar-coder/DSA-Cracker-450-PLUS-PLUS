//kth largest element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kth(int arr[],int k,int n){
    
    //sort array
    sort(arr, arr+n);
    
    //print kth no
    cout<<arr[k-1];
    return 0;
}

int main() {
    int k;
    int arr[]={1,9,8,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"No:"<<endl;
    cin>>k;
    
    kth(arr,k, n);
    return 0;
}