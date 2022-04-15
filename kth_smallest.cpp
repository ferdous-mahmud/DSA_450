// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

// Time Complexity: O(nlogn) // brout force approach
// Space Complexity: O(n)

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {7 ,10 ,4 ,3, 20, 15};
	int k = 3;
	sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << arr[k - 1] << endl;

	return 0;
}