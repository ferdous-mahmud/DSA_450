// Find Maximum and Minumum element form an array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include <algorithm>
using namespace std;

int main(){

	int arr[] = {1, 3, 6, 8, 9, 0, 4, 7, 3, 7, 56};
	int size = sizeof(arr) / sizeof(arr[0]);

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < size; ++i)
	{
		max = std::max(max,arr[i]);
		min = std::min(min, arr[i]);
	}

	cout << min << " and " << max;


	return 0;
}