#include <stdio.h>

int main()
{
	int numArr[2][3][4] = {
		{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132} },
		{
		{111, 122, 133, 144},
		{155, 166, 177, 188},
		{199, 1110, 1121, 1132}

		}
		
	};

	printf("%d\n", numArr[0][2][1]);
	numArr[1][1][2] = 0;

	int depth = sizeof(numArr) / sizeof(numArr[0]);

	int ros = sizeof(numArr[0]) / sizeof(numArr[0][0]);

	int column = sizeof(numArr[0][0]) / sizeof(int);
	
	return 0;
}