#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollgetSum();

void inputTable(int sumTable[], int sum);
void main()
{
	int sumTable[11] = { 0 };

	srand(time(NULL));

	for (int j = 0; j < 36000; j++)
	{
		inputTable(sumTable, RollgetSum());
		
	}
	for (int i = 0; i < 11; i++)
	{
		printf("骰子總和 %2d 點出現的次數 %5d次 出現機率%.2f%%\n",i+2, sumTable[i],((float)sumTable[i]/36000*100));
	}

	system("pause");
}
int RollgetSum()
{
	int i = rand() % 6 + 1;
	int x = rand() % 6 + 1;
	return i + x;
}
void inputTable(int sumTable[], int sum)
{
	sumTable[sum - 2] += 1;
}
