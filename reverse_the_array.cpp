// Reverse the array
// Brout force solution
// Time complexity: O(n)
// Space complexity: O(n)
#include<iostream>
using namespace std;

int main(){
	int size = 10;
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int res[size];

	int j = size;
	for (int i = 0; i < size; ++i)
	{
		j --;
		res[j] = arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		cout << res[i] << endl;	
	}
	
    return 0;
}