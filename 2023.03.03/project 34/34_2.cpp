#include <stdio.h>

int main()
{
	int numArr[0][0] = 11;
	int numArr[0][1] = 22;
	int numArr[0][2] = 33;
	int numArr[0][3] = 44;

	int numArr[1][0] = 55;
	int numArr[1][1] = 66;
	int numArr[1][2] = 77;
	int numArr[1][3] = 88;

	int numArr[2][0] = 99;
	int numArr[2][1] = 110;
	int numArr[2][2] = 121;
	int numArr[2][3] = 132;


	printf("%d\n", numArr[0][0]);
	printf("%d\n", numArr[1][2]);
	printf("%d\n", numArr[2][0]);
	printf("%d", numArr[2][3]);

	return 0;
}