#include <stdio.h>

// merge two sorted arrays using a function

// function prototypes
void input_arr(int *);
void sort_arr(int *);
void merge_arrs(int *, int *, int *);
void display_arr(int *, int);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr1[arr_len];
	int arr2[arr_len];
	int mrgd[arr_len * 2];

	printf("Enter the elements of the array:\n");
	input_arr(arr1);

	printf("\nEnter the elements of another array:\n");
	input_arr(arr2);

	sort_arr(arr1);
	sort_arr(arr2);

	printf("\nThe sorted arrays are:\n");
	display_arr(arr1, arr_len);
	printf("\n");
	display_arr(arr2, arr_len);

	merge_arrs(arr1, arr2, mrgd);

	printf("\n\nThe merged array is as follows:\n");
	display_arr(mrgd, arr_len * 2);

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

	for (i = 0; i < (arr_len * 2); i++) {
		if (*arr1_ptr > *arr2_ptr) {
			*mrgd_ptr = *arr2_ptr;
			arr2_ptr++;
		} else {
			*mrgd_ptr = *arr1_ptr;
			arr1_ptr++;
		}

		mrgd_ptr++;
	}
}

void sort_arr(int *arr_ptr) {
	int i, j, temp;

	// bubble sort
	for (i = 0; i < arr_len; i++) {
		for (j = (i + 1); j < arr_len; j++) {
			if (*(arr_ptr + i) > *(arr_ptr + j)) {
				temp = *(arr_ptr + i);
				*(arr_ptr + i) = *(arr_ptr + j);
				*(arr_ptr + j) = temp;
			}
		}
	}
}

void display_arr(int *arr_ptr, int len) {
	int i;

	for (i = 0; i < len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
