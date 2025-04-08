#include <stdio.h>

// print the unique elements in an array using a function

// function prototypes
void input_arr(int *);
void prnt_unq_elems(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr);

	printf("\nThe unique elements are:\n");
	prnt_unq_elems(arr);

	// exit with code 0
	return 0;
}

// function declarations
void input_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d: ", i + 1);
		scanf_s("%d", arr_ptr);
		arr_ptr++;
	}
}

void prnt_unq_elems(int *arr_ptr) {
	int i, j, dupl_ctr, *dupl_ptr;

	// loop through all elements
	for (i = 0; i < arr_len; i++) {
		dupl_ptr = arr_ptr - 1;
		dupl_ctr = 0;

		// loop through all elements before the current element
		for (j = 0; j < i; j++) {

			// the element already existed in a previous position
			if (*dupl_ptr == *arr_ptr) {
				dupl_ctr++;
			}

			dupl_ptr--;
		}

		// print if no identical elements existed before current position
		if (dupl_ctr == 0) {
			printf("%d ", *arr_ptr);
		}

		arr_ptr++;
	}
}
