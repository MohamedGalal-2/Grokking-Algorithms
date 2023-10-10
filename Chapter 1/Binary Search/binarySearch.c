#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(int* list, int list_length, int item);

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 100 };
	int array_length = sizeof(arr) / sizeof(arr[0]);
	int item = 11;
	int result = binary_search(arr, array_length, item);

	if (result == -1)
	{
		printf("Key not found!\n");
	}
	else
	{
		printf("Key found at index %d\n", result);
	}

	return 0;
}

int binary_search(int* list, int list_length, int item)
{
	// low and high keep track of which part of the list you'll search in.
	int low = 0;
	int high = list_length - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2; // get the middle element index
		int guess = list[mid]; // guess the middle element

		if (guess == item) // found the item
		{
			return mid;
		}
		else if (guess > item) // the guess was too high
		{
			high = mid - 1;
		}
		else // the guess was too low
		{
			low = mid + 1;
		}
	}

	return -1; // item doesn't exist
}

