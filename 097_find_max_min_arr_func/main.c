#include <stdio.h>

// find the maximum and minimum of 10 elements in an array using a function

// function prototypes
void input_arr(int *);
void find_min_max(int *, int *, int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	arr_len = 10;
	int arr[arr_len], min, max;

	printf("Enter an array of 10 elements:\n");
	input_arr(arr);

	find_min_max(&max, &min, arr);

	printf("\nMax = %d\nMin = %d", max, min);

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

void find_min_max(int *max_ptr, int *min_ptr, int *arr_ptr) {
	int max, min, i;

	for (i = 0; i < arr_len; i++) {
		if (*arr_ptr > max) {
			max = *arr_ptr;
		} else if (*arr_ptr < min) {
			min = *arr_ptr;
		}

		arr_ptr++;
	}

	*max_ptr = max;
	*min_ptr = min;
}
