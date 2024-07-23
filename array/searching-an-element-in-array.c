/* ************************************
 * Searching an element in an array   *
 * Best Time Complexity: O(1)         *
 * Worst Time Complexity: O(n)        *
 * Average Time Complexity: O(n)      *
 * ***********************************/

#include <stdio.h>

int search(int arr[], int N, int key)
{
    for(int i = 0; i < N; i++){
        if(arr[i] == key)
            return (i);
    }
    return (-1);
}

int main()
{
    int N;

    scanf("%d",&N);

    int i, arr[N], key;

    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    printf("%d",search(arr,N,key));

    return 0;
}

/* ************************************
 * Test Case 1:
 * Input
 * 5
 * 10 20 30 40 50
 * 40
 *
 * Expected Output
 * 3
 *
 * ***********************************
 * Test Case 2:
 * Input
 * 6
 * 1 5 2 4 3 9
 * 10
 *
 * Expected Output
 * -1
 *
 * ***********************************
 * Test Case 3:
 * Input
 * 7
 * 1 5 2 4 3 6 8
 * 8
 *
 * Expected Output
 * 6
 * ***********************************/
