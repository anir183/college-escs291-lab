#include <stdio.h>

// perform addition on each element of two arrays and print the third array
// using a function

// function prototypes
void input_arr(int *);
void sum_arrs(int *, int *, int *);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr1[arr_len];
	int arr2[arr_len];
	int sum_arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr1);

	printf("\nEnter the elements of another array:\n");
	input_arr(arr2);

	sum_arrs(arr1, arr2, sum_arr);

	printf("\nThe new array after summing the two is:\n");
	display_arr(sum_arr);

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

void sum_arrs(int *arr1_ptr, int *arr2_ptr, int *sum_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		*sum_ptr = *arr1_ptr + *arr2_ptr;
		sum_ptr++;
		arr1_ptr++;
		arr2_ptr++;
	}
}

void display_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
