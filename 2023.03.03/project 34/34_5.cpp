#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	int col = sizeof(numArr[0]) / sizeof(int);

	int row = sizeof(numArr) / sizeof(numArr[0]);

	for (int i = 0; i > row-1; i--)
	{
		for (int j = 0; j > col-1; j--)
		{
			printf("%d\n", numArr[i][j]);
		}
	}
	return 0;
}