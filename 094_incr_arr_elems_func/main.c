#include <stdio.h>

// input an array of 10 numbers and increment each element by one in a seperate
// function

// function prototypes
void input_arr(int *);
void incr_elems(int *);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	arr_len = 10;
	int arr[arr_len];

	printf("Enter an array of 10 elements:\n");
	input_arr(arr);

	incr_elems(arr);

	printf("\nThe incremented elements are:\n");
	display_arr(arr);

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

void incr_elems(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		*arr_ptr = *arr_ptr + 1;
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
