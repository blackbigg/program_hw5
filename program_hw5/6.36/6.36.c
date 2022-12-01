#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
void stringReverse(char str[]);
int i=0,len;
void main()
{
	
	char str[SIZE];
	printf("輸入一字串: ");
	scanf("%s", str);
	len = strlen(str);
	stringReverse(str);
	printf("變化後的字串:%s\n", str);
	system("pause");
}
void stringReverse(char str[])
{
	
	
	char temp;
	if (i<len/2)
	{
		
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		
		i++;
		stringReverse(str);
	}
}