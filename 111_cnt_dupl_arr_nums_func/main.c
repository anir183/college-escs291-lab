#include <stdio.h>

// count the number of duplicate numbers in an array

// function prototypes
void input_arr(int *);
int calc_dupl(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr);

	printf("\nThe array has %d duplicate elements.\n", calc_dupl(arr));

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

int calc_dupl(int *arr_ptr) {
	int i, j, dupl_elm_ctr = 0, dupl_bfr_ctr, *dupl_ptr;

	// loop through all elements
	for (i = 0; i < arr_len; i++) {
		dupl_ptr = arr_ptr - 1;
		dupl_bfr_ctr = 0;

		// loop through all elements before the current element
		for (j = 0; j < i; j++) {

			// the element already existed in a previous position
			if (*dupl_ptr == *arr_ptr) {
				dupl_bfr_ctr++;
			}

			dupl_ptr--;
		}

		// print if no identical elements existed before current position
		if (dupl_bfr_ctr > 0) {
			dupl_elm_ctr++;
		}

		arr_ptr++;
	}

	return dupl_elm_ctr;
}
