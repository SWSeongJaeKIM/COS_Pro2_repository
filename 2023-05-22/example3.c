#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a[], int b)
{
	int answer = 0;
	int min = a[1];
	int temp = 0;
	for (int i = 1; i <= b; i++)
	{
		
		if (a[i] > min)
		{
			answer += a[i] - min;
		}
		else (a[i] < min);
		{
			min = a[i];
		}
		
	}

	return answer;
}

int main()
{
	int calorie[] = { 713, 665, 873, 500, 751 };
	int ret = solution(calorie, 5);

	
	printf("solution 함수의 반환값은 %d 입니다 \n", ret);
}
