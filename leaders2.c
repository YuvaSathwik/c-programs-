#include <stdio.h>


void printLeaders(int arr[], int size)
{
	int max_from_right = arr[size - 1];


	printf("%d ", max_from_right);

	for (int i = size - 2; i >= 0; i--) {
		if (max_from_right < arr[i]) {
			max_from_right = arr[i];
			printf("%d ", max_from_right);
		}
	}
}


int main()
{
	int arr[] = { 6,7,4,3,5,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printLeaders(arr, n);
	return 0;
}

