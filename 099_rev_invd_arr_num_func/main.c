#include <stdio.h>

// reverse each individual element in an array using a function

// function prototypes
void input_arr(int *);
void rev_indv_arr_elems(int *, long *);
long rev_num(int);
void display_arr(long *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];
	long rev_arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr);

	rev_indv_arr_elems(arr, rev_arr);

	printf("\nThe array with its elements reversed is:\n");
	display_arr(rev_arr);

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

void rev_indv_arr_elems(int *arr_ptr, long *rev_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		*rev_ptr = rev_num(*arr_ptr);
		arr_ptr++;
		rev_ptr++;
	}
}

long rev_num(int num) {
	long rev = 0;

	while (num > 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	return rev;
}

void display_arr(long *arr_ptr) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%ld ", *arr_ptr);
		arr_ptr++;
	}
}
