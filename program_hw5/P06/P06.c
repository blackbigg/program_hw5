#include <stdio.h>
#include <stdlib.h>

int cubeByReference(int n);

void main()
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cubeByReference(number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
}
int cubeByReference(int n)
{
	return n * n * n;
}