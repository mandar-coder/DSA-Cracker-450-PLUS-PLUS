//Given Array of size n and a number k, find all elements that appear more than n/k times
#include <bits/stdc++.h>
using namespace std;

void morethanNbyK(int arr[], int n, int k)
{
    int x = n / k;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Elements whose frequency is more than n/k:" << endl;
    
    for (auto i : freq) {
        if (i.second > x) {
            cout << i.first << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    morethanNbyK(arr, n, k);

    delete[] arr;
    return 0;
}
//Code by mandar
