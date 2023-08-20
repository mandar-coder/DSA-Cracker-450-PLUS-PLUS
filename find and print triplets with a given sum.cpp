#include <bits/stdc++.h>
using namespace std;

// Function to find and print triplets with a given sum
bool find3Numbers(int A[], int arr_size, int sum)
{
    // Fix the first element as A[i]
    for (int i = 0; i < arr_size - 2; i++)
    {
        // Fix the second element as A[j]
        for (int j = i + 1; j < arr_size - 1; j++)
        {
            // Now look for the third number
            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    // Triplet found, print the triplet and return true
                    cout << "Triplet is " << A[i] << ", " << A[j] << ", " << A[k] << endl;
                    return true;
                }
            }
        }
    }

    // If we reach here, then no triplet was found
    return false;
}

/* Driver code */
int main()
{
    int arr_size, sum;

    cout << "Enter the size of the array: ";
    cin >> arr_size;

    int A[arr_size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < arr_size; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the desired sum: ";
    cin >> sum;

    if (find3Numbers(A, arr_size, sum))
    {
        cout << "Triplet with the given sum exists." << endl;
    }
    else
    {
        cout << "No triplet with the given sum found." << endl;
    }

    return 0;
}
