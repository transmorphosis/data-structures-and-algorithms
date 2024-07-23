/**************************************
 * Inserting an element in an array   *
 * Best Time Complexity: O(1)         *	
 * Worst Time Complexity: O(n)        *
 * Average Time Complexity: O(n)      *
 *************************************/

#include <stdio.h>

void insert(int arr[], int N, int pos, int element){
	for(int i = N; i >= pos; i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = element;
}

int main(void){
	int N;
	scanf("%d", &N);

	int i, arr[N], pos, element;
	for(i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d\n%d", &pos, &element);
	insert(arr, N, pos, element);
	for(i = 0; i <= N; i++){
		printf("%d ", arr[i]);
	}
	return(0);
}

/* **************************
 * Test case1:
 * Input
 * 5
 * 10 20 40 50 30
 * 0
 * 100
 *
 * Expected Output
 * 100 10 20 40 50 30
 *
 * **************************
 * Test case2:
 * Input
 * 10
 * 1 5 7 8 10 12 45 67 82 13
 * 4
 * 100
 * 
 * Expected Output
 * 1 5 7 8 100 10 12 45 67 82 13
 * 
 * **************************
 * Test case3:
 * Input
 * 5
 * 1 2 3 4 5
 * 5
 * 100
 *
 * Expected Output
 * 1 2 3 4 5 100
 * **************************/
