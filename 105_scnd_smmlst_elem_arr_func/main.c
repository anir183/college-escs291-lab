#include <stdio.h>

// find the second smallest element in an array using a function

// function prototypes
void input_arr(int *);
int find_snd_smlst(int *);

// global variables
int arr_len;

// main func - entry point
int main() {
	printf("Size of array: ");
	scanf_s("%d", &arr_len);

	int arr[arr_len];

	printf("Enter the elements of the array:\n");
	input_arr(arr);

	printf("\nThe second smallest element is %d", find_snd_smlst(arr));

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

int find_snd_smlst(int *arr_ptr) {
	int i, lgst = *arr_ptr, snd_smlst = *arr_ptr;

	for (i = 0; i < arr_len; i++) {
		if (*arr_ptr > lgst) {
			lgst = *arr_ptr;
		}

		if (*arr_ptr > snd_smlst && *arr_ptr < lgst) {
			snd_smlst = *arr_ptr;
		}

		arr_ptr++;
	}

	return snd_smlst;
}
