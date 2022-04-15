// Find Maximum and Minumum element form an array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include <algorithm>
using namespace std;

struct Pair {
	int min;
	int max;
};

int main(){

	int arr[] = {1, 3, 6, 8, 9, 0, 4, 7, 3, 7, 56};
	int size = sizeof(arr) / sizeof(arr[0]);

	struct Pair minmax;

	minmax.min = arr[0];
	minmax.max = arr[0];


	for (int i = 0; i < size; ++i)
	{
		minmax.min = std::min(minmax.min,arr[i]);
		minmax.max = std::max(minmax.max, arr[i]);
	}

	cout << minmax.min << endl;
	cout << minmax.max << endl;


	return 0;
}