#include <stdio.h>
  void swap(int *a, int *b) 
  {
    int tempvar = *a;
    *a = *b;
    *b = tempvar;
  }
  void heapify(int arr[], int n, int i) 
  {
    int greatest = i;
    int leftSide = 2 * i + 1;
    int rightSide = 2 * i + 2;
    if (leftSide < n && arr[leftSide] > arr[greatest])
      greatest = leftSide;
    if (rightSide < n && arr[rightSide] > arr[greatest])
      greatest = rightSide;
    if (greatest != i) 
	{
      swap(&arr[i], &arr[greatest]);
      heapify(arr, n, greatest);
    }
  }
  void heapSort(int arr[], int n) 
  {
  	int i;
    for ( i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  

    for (i = n - 1; i >= 0; i--) 
	{
    	int i;
      swap(&arr[0], &arr[i]);
  
      heapify(arr, i, 0);
    }
  }
  void printArray(int arr[], int n)
  {
  	int i;
    for (i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  int main() 
  {
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
    printf("Sorted array is \n");
    printArray(arr, n);
  }
