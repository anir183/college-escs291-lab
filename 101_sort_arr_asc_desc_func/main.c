#include <stdio.h>

// sort and array in ascending or descending order using a function

// function prototypes
void input_arr(int *);
void sort_arr(int *, char);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter the array elements:\n");
	input_arr(arr);

	sort_arr(arr, 'a');

	printf("\nThe ascending sorted array is as follows:\n");
	display_arr(arr);

	sort_arr(arr, 'd');

	printf("\nThe ascending sorted array is as follows:\n");
	display_arr(arr);

	// exit with code 0
	return 0;
}

// function declarations|
void input_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d: ", i + 1);
		scanf_s("%d", arr_ptr);
		arr_ptr++;
	}
}

void sort_arr(int *arr_ptr, char order) {
	int i, j, temp;

	// bubble sort
	for (i = 0; i < arr_len; i++) {
		for (j = (i + 1); j < arr_len; j++) {
			if (order == 'a' || order == 'A') {
				if (*(arr_ptr + i) > *(arr_ptr + j)) {
					temp = *(arr_ptr + i);
					*(arr_ptr + i) = *(arr_ptr + j);
					*(arr_ptr + j) = temp;
				}
			} else if (order == 'd' || order == 'D') {
				if (*(arr_ptr + i) < *(arr_ptr + j)) {
					temp = *(arr_ptr + i);
					*(arr_ptr + i) = *(arr_ptr + j);
					*(arr_ptr + j) = temp;
				}
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
