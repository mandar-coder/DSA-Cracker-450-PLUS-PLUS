#include <bits/stdc++.h>
using namespace std;

// Function to find the next permutation
void nextPermutation(vector<int>& arr)
{
	next_permutation(arr.begin(),arr.end());
}

int main()
{

	vector<int> arr = { 1, 2, 3, 6, 5, 4 };

	// Function call
	nextPermutation(arr);

	// Printing the answer
	for (auto i : arr) {
		cout << i << " ";
	}

	return 0;
}
