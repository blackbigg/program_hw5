#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int *nPtr);

void main()
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByReference(&number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
}
void cubeByReference(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}