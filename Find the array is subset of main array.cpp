// Find the array is subset of main array
#include <iostream>
using namespace std;


//Checking subset array
bool checkarray(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
 
        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == m)
            return 0;
    }
 
    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;
}

//main function
int main(){
    // taking input from user
    //first array
    int n,m;
    cout<<"Enter size of first array:";
    cin>>n;
    int arr1[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
    //input second array
    cout<<"Enter size of second array:";
    cin>>m;
    int arr2[m];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<m;i++){
        cin>>arr2[i];
    }
    //calling function
    if(checkarray(arr1,arr2, n, m)){
        cout<<"Array1 is subset of array2"<<endl;
    }else{
        cout<<"Array1 is not subset of array2"<<endl;
    }
    return 0;
}
