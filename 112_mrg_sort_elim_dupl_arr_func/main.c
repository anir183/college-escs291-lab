#include <stdio.h>

// take two arrays, merge them, sort the resultant array and eliminate duplicate
// elements in another array

// function prototypes
void input_arr(int *);
void merge_arrs(int *, int *, int *);
void sort_arr(int *);
int elim_dupls(int *, int *);
void display_arr(int *, int);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr1[arr_len];
	int arr2[arr_len];
	int final_arr[arr_len * 2], final_arr_len;

	printf("Enter the elements of the array:\n");
	input_arr(arr1);

	printf("\nEnter the elements of another array:\n");
	input_arr(arr2);

	merge_arrs(arr1, arr2, final_arr);
	sort_arr(final_arr);
	final_arr_len = elim_dupls(final_arr, final_arr);

	printf("\nThe final merged, sorted and duplicate eliminated array is:\n");
	display_arr(final_arr, final_arr_len);

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

void merge_arrs(int *arr1_ptr, int *arr2_ptr, int *mrgd_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		*mrgd_ptr = *arr1_ptr;
		mrgd_ptr++;
	}

	for (i = 0; i < arr_len; i++) {
		*mrgd_ptr = *arr2_ptr;
		mrgd_ptr++;
	}

	printf("\n\n");
	display_arr(mrgd_ptr - arr_len * 2, arr_len);
}

void sort_arr(int *arr_ptr) {
	int i, j, temp;

	// bubble sort
	for (i = 0; i < (arr_len * 2); i++) {
		for (j = (i + 1); j < (arr_len * 2); j++) {
			if (*(arr_ptr + i) > *(arr_ptr + j)) {
				temp = *(arr_ptr + i);
				*(arr_ptr + i) = *(arr_ptr + j);
				*(arr_ptr + j) = temp;
			}
		}
	}

	printf("\n\n");
	display_arr(arr_ptr - arr_len * 2, arr_len);
}

int elim_dupls(int *arr_ptr, int *final_arr_ptr) {
	int i, j, dupl_ctr, *dupl_ptr, unq_len = 0;

	// loop through all elements
	for (i = 0; i < (arr_len * 2); i++) {
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
			*final_arr_ptr = *arr_ptr;
			final_arr_ptr++;
			unq_len++;
		}

		printf("\n\n");
		display_arr(final_arr_ptr - arr_len * 2, arr_len);

		arr_ptr++;
	}

	return unq_len;
}

void display_arr(int *arr_ptr, int len) {
	int i;

	for (i = 0; i < len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
