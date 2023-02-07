#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int answer(int T_tabel[], int T_tabel_len, int n)
 {
	int answer = 0;
	int* a = (int*)malloc(sizeof(int) * n);	
}

int main()
 {
	int T_tabel1[] = { 2, 10, 4, 6};
	int n1 = 3;
	int T_tabel_len1 = 4;
	int sum1 = answer(T_tabel1, T_tabel_len1, n1);
	printf(" answer1 : %d \n", sum1);



	int T_tabel2[] = { 2, 4, 1, 10, 7, 4, 2};
	int T_tabel_len2 = 7;
	int n2 = 4;
	int ret2 = answer(T_tabel2, T_tabel_len2, n2);
	printf(" answer1 : %d \n", sum2);
}