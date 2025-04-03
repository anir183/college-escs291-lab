#include <stdio.h>

// sort an array of 10 elements using a function

// function prototypes
void input_arr(int *);
void sort_arr(int *);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	arr_len = 10;
	int arr[arr_len];

	printf("Enter an array of 10 elements:\n");
	input_arr(arr);

	sort_arr(arr);

	printf("\nThe sorted array is as follows:\n");
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

void display_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
