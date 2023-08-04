//count inversion array 
#include <iostream>
using namespace std;

int countinversion(int arr[], int n){
    int counti=0;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                counti++;
            }
        }
    }
    return counti;
}

int main(){
    int arr[]={1,4,3,4};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<countinversion(arr,n);
    return 0;
}
