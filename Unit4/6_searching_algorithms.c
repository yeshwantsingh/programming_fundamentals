#include <stdio.h>

int lsearch(int *arr, int x, int size)
{
	for(int i = 0; i < size; i++)
	{
		if (*(arr + i) == x)
			return i;
	}
	return -1;
}

int bsearch(int *arr, int x, int start, int end)
{
	int mid = (end + start)/2;
	if( arr[mid] == x)
		return mid;
	else if(arr[mid] > x)
		bsearch(arr, x, start, mid -1);
	else
		bsearch(arr, x, mid + 1, end);
	return -1;
}


// Bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
	int arr[] = {2, 5, 0, -1, 9, 3, 11};
	int x = 3;

	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The %d is found at %d\n", x, lsearch(arr, x, size));

	bubbleSort(arr,size);
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	printf("\n");

	printf("The %d is found at %d\n", x, bsearch(arr, x, 0, size));

}


