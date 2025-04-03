#include <stdio.h>

// calculate the sum of the elements of an array in a seperate function and
// print the sum in main()

// function prototypes
void input_arr(int *);
int sum_arr(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter array elements:\n");
	input_arr(arr);

	printf("\n[From main()] The sum of elements is: %d", sum_arr(arr));

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

int sum_arr(int *arr_ptr) {
	int i, sum = 0;

	for (i = 0; i < arr_len; i++) {
		sum += *arr_ptr;
		arr_ptr++;
	}

	printf("\n[From sum_arr()] The sum of elements is: %d", sum_arr(arr));

	return sum;
}
