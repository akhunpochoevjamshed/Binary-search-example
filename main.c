#include <stdio.h>
#include <stdlib.h>

int  binary_search(int *arr, size_t arr_len, int num);
void test( void );


int main(int argc, char const *argv[]) {
	test();
	return 0;
}


int binary_search(int *arr, size_t arr_len, int num) {
	int low  = 0;
	int high = arr_len - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		int val = arr[mid];
		
		if (val < num) 
			low = mid + 1;
		else if (val > num)
			high = mid - 1;
		else 
			return mid;
	}

	return -1;
}

void test() {
	int arr_len = 7;
	int arr[] = {7, 9, 18, 99, 166, 187, 456};

	// Tests
	if (binary_search(arr, arr_len, 7) == 0) {
		printf("Test 1 completed!\n");
	} else {
		printf("Error in test 1!\n");
	}

	if (binary_search(arr, arr_len, 456) == 6) {
		printf("Test 2 completed!\n");
	} else {
		printf("Error in test 2!\n");
	}
	
	if (binary_search(arr, arr_len, 99) == 3) {
		printf("Test 3 completed!\n");
	} else {
		printf("Error in test 3!\n");
	}
	
	if (binary_search(arr, arr_len, 0) == -1) {
		printf("Test 4 completed!\n");
	} else {
		printf("Error in test 4!\n");
	}

}