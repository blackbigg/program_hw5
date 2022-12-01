#include <stdio.h>
#include <stdlib.h>


#define SIZE 10
void bubbleSort(int arr[], int size);
void showarray(int arr[], int size);
int binarySearch(int arr[], int startsub, int endsub, int searchkey);
void main()
{
	int arr[SIZE];
	int searchkey;
	int ans;
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("輸入陣列中第%d個元素: ",i );
		scanf_s("%d", &arr[i]);
	}
	printf("originalArray\n");
	showarray(arr, SIZE);

	bubbleSort(arr, SIZE);
	
	printf("\nnewArray\n");
	showarray(arr, SIZE);
	printf("\ninput the searchKey: ");
	scanf_s("%d", &searchkey);
	ans = binarySearch(arr, 0, SIZE - 1, searchkey);

	if (ans==-1)
	{
		printf("\nsearchKey is not found.\n");
	}
	else
	{
		printf("\nsearchKey is in newArray[%d]\n", ans);
	}

	system("pause");
}
void bubbleSort(int arr[],int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
}
void showarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%4d ", arr[i]);
	}
}
int binarySearch(int arr[], int startsub, int endsub, int searchkey)
{
	if (startsub>endsub)
	{
		return -1;
	}
	int middle = (startsub + endsub) / 2;
	if (arr[middle]==searchkey)
	{
		return middle;
	}
	else if (arr[middle]>searchkey)
	{
		endsub -= 1;
		return binarySearch(arr,startsub,endsub,searchkey);
	}
	else if(arr[middle]<searchkey)
	{
		startsub += 1;
		return binarySearch(arr, startsub, endsub, searchkey);
	}
	
}

