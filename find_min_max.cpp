#include <iostream>
using namespace std;
//find min max
void minmax(int arr[],int n){
    int max ,min;
    min= arr[0];
    max= arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
}

int main()
{
    int n;
    cout<<"no of element array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter no:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
  
    minmax(arr, n);
    return 0;
}