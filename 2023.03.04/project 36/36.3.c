#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	char s2[10];

	printf("문자열을 두개 입력하시오 : ");
	scanf("%s %s\n", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}