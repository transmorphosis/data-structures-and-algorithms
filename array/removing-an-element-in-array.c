#include<stdio.h>
  
void remove_element(int arr[], int N, int key)
{
	int found = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == key)
			found = 1;
        if (found && i < N - 1)
			arr[i] = arr[i + 1];
	}
	if (found)
		arr[N - 1] = 0;
}

int main()
{
    int N;

    scanf("%d",&N);

    int i, arr[N], key;

    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);
	scanf("%d",&key);

    remove_element(arr, N, key);

    for(i = 0; i < N-1; i++)
        printf("%d ",arr[i]);

    return 0;
}
