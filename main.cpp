#include<iostream>
using namespace std;

int* BubbleSort(int * arr,int size){


	for (int j = size - 1;j > 0;j--) {

		for (int i = 0;i < j;i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	return arr;
}

int main() {

	int arr[5] = { 20,123,384,2,76 };

	int size = sizeof(arr) / sizeof(int);
	
	int* resurt = BubbleSort(arr, size);
	for (int i = 0;i < 5;i++) {
		cout << resurt[i] << " ";
	}

}