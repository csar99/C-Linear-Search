// Linear search algorithm for small or unsorted arrays
#include <stdio.h>
#define SIZE 6 // define array size

// function prototype for linear search
int linearSearch(int array_to_search[], int array_size, int element_to_find);

int main(void)
{
	int a[SIZE] = { 12, 3, 5, 2, 6, 18 }; // array to search
	int user_input; // variable for the user input
	printf("Enter an integer to find: ");
	scanf_s("%d", &user_input); // get the input from the user

	// variable to store the result from the linearSearch function
	int result = linearSearch(a, SIZE, user_input);

	if (result != -1)
	{
		printf("%d at index %d", user_input, result);
	}
	else {
		printf("%d is not found.", user_input);
	}

}

// function linear search implementation
int linearSearch(int array_to_search[], int array_size, int element_to_find)
{
	for (size_t i = 0; i < array_size; ++i)
	{
		if (array_to_search[i] == element_to_find)
		{
			return i; // reurn the ndex of the element
		}
	}
	return -1; // element not found
}