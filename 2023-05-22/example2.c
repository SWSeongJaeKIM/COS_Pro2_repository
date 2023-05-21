#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b)
{
	int answer = 0;
	int temp[2] = { 0, };
	int i = 0;
	for (i = 0; i < 15; i++)
	{
		if (i % 4 == 0) temp[0] = 1;
		else temp[0] = 0;
		if (i % 6 == 0) temp[1] = 1;
		else temp[1] = 0;
		if (temp[0] == 1 && temp[1] == 1)
		{
			answer = i;
		}
	}

	return answer;
}

int main()
{
	int a = 4;
	int b = 6;
	int ret = solution(a, b);
	printf("solution 함수의 반환값은 %d 입니다 \n", ret);
}
