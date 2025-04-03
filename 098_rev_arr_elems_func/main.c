#include <stdio.h>

// reverse order of elements in an array using a function

// function prototypes
void input_arr(int *);
void rev_arr(int *);
void display_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr);

	rev_arr(arr);

	printf("\nThe reversed array is:\n");
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

void rev_arr(int *frnt_ptr) {
	int *end_ptr = frnt_ptr, i, temp;

	for (i = 0; i < (arr_len - 1); i++) {
		end_ptr++;
	}

	for (i = 0; i < arr_len / 2; i++) {
		temp = *frnt_ptr;
		*frnt_ptr = *end_ptr;
		*end_ptr = temp;

		frnt_ptr++;
		end_ptr--;
	}
}

void display_arr(int *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d ", *arr_ptr);
		arr_ptr++;
	}
}
