#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define array_length 14

int findSmallest(int* arr);
int* selectionSort(int* arr);

int main()
{
	int arr[] = { 1000, 2000, 5780, 145790, 1233689877, 0 ,0, 1, 1, 50, 50, 500, 10024, 30000 };
	int* sortedArr = 0;

	sortedArr = selectionSort(arr);

	printf("Sorted Array: [");
	for (int i = 0; i < array_length; i++)
	{
		if (i == array_length - 1)
		{
			printf("%d", sortedArr[i]);
		}
		else
		{
			printf("%d, ", sortedArr[i]);
		}
	}
	printf("]");

	return 0;
}

/**
  * @brief:  Finds the smallest element in the array
  * @param:  int* arr - pointer to the array
  * @param:  int list_length - length of the array
  * @return: int - index of the smallest element
  * @note:   The function returns the index of the smallest element
  */
int findSmallest(int* arr)
{
	// Stores the smallest value
	int smallest = arr[0];
	// Stores the index of the smallest value
	int smallest_index = 0;

	for (int i = 1; i < array_length; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_index = i;
		}
		else
		{
			// Do nothing
		}
	}

	return smallest_index;
}

/**
  * @brief:  Selection sort algorithm
  * @param:  int* arr - pointer to the array
  * @param:  int list_length - length of the array
  * @return: int* - pointer to the new array
  * @note:   The function returns a pointer to the new array
  * The function does not modify the original array
  */
int* selectionSort(int* arr)
{
	// create a new array
	int* newArr = (int*)malloc(array_length * sizeof(int));
	int smallest = 0;

	for (int i = 0; i < array_length; i++)
	{
		// find the smallest element in the array
		smallest = findSmallest(arr);
		// add the smallest element to the new array
		newArr[i] = arr[smallest];
		// remove the smallest element from the original array
		arr[smallest] = INT_MAX;
	}

	return newArr;
}

