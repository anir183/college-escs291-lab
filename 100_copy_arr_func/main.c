#include <stdio.h>

// copy the elements of one array to another using a function

// function prototypes
void input_arr(int *);
void copy_arr(int *, int *);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];
	int dupl_arr[arr_len];

	printf("Enter the array elements:\n");
	input_arr(arr);

	copy_arr(arr, dupl_arr);

	printf("\nOriginal array:\n");
	display_arr(arr);
	printf("\nCopied array:\n");
	display_arr(dupl_arr);

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

void copy_arr(int *arr_ptr, int *cpy_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		*cpy_ptr = *arr_ptr;
		cpy_ptr++;
		arr_ptr++;
	}
}

void display_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
