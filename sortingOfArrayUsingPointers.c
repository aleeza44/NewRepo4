#include<stdio.h>
#include<stdlib.h>
void ascendingSort(int* arr, int start, int end) {
	for (int i = start; i < end; i++) {
		for (int* j = arr + start; j < arr + end - (i - start) - 1; j++) {
			if (*j > *(j + 1)) {
				int temp = *j;
				*j = *(j + 1);
				*(j + 1) = temp;
			}
		}
	}
}
void descendingSort(int* arr, int start, int end) {
	for (int i = start; i < end; i++) {
		for (int* j = arr + start; j < arr + end - (i - start) - 1; j++) {
			if (*j < *(j + 1)) {
				int temp = *j;
				*j = *(j + 1);
				*(j + 1) = temp;
			}
		}
	}
}
int main() {
	int n;
	printf("Enter the size of array: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Enter the elements of array: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", arr + i);
	}
	int half = n / 2;
	ascendingSort(arr, 0, half);
	descendingSort(arr, half, n);
	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
	free(arr);
	return 0;
}
