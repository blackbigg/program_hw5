#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int max, counter;
void main()
{
	int arr[SIZE];
	max = 0;
	counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		printf("��J�}�C����%d�Ӥ���: ", i);
		scanf_s("%d", &arr[i]);

	}
	printf("original Array\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d ", arr[i]);
	}
	printf("\nlargest element of the array is \n%4d\n",recursiveMaximum(arr, SIZE));

	system("pause");
}
int recursiveMaximum(int arr[], int size)
{
	if (counter == size - 1)
	{
		return max;
	}
	else
	{
		if (arr[counter] > max)
		{
			max = arr[counter];
		}
		counter++;
		return recursiveMaximum(arr, size);
	}
}