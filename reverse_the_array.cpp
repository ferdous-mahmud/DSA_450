// Reverse the array
// Brout force solution
// Time complexity: O(n)
// Space complexity: O(1)
#include<iostream>
using namespace std;

int main(){
	int size = 9;
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

	int i = 0;
	int j = size - 1;

	while(j > i){

		arr[i] = arr[j] + arr[i];
		arr[j] = arr[i] - arr[j];
		arr[i] = arr[i] - arr[j];

		i ++;
		j --;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}

    return 0;
}