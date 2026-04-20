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
}

int main()
{
	int arr[] = {2, 5, 0, -1, 9, 3, 11};
	int x = 3;

	printf("The %d is found at %d\n", x, search(arr, x, sizeof(arr)/sizeof(arr[0])));
}


