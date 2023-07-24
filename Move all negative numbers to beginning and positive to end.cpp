#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int>& arr){
sort(arr.begin(),arr.end());
}

int main() {

	vector<int> arr = { -1, 22, -31, 4, 55, 6, -71, 8, 93 };
	move(arr);
	for (int e : arr)
	cout<<e << " ";
	return 0;
}
