#include<stdio.h>

int month_num(int *p, int size);
void month_chg(int *p);
void month_print(int *p, int size);
void reverse(double *pd, int size);

int main(void)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	int *num, size;

	size = sizeof(month) / sizeof(month[0]);
	num = month;

	int res = month_num(num, size);
	printf("갯수 : %d\n", res);
	
	month_chg(num);
	printf("2월의 일수 : %d\n", *(num + 1));

	month_print(num, size);

	size = sizeof(ary) / sizeof(ary[0]);
	reverse(ary, size);

	return 0;
}

int month_num(int *p, int size) {

	int cnt = 0;
	for (int i = 0; i < size; i++)
	{
		//printf("%d ", *(p + i));
		if (p[i] == 31) {
			//printf("\n%d ", i);
			cnt++;
		}
	}
	return cnt;
}

void month_chg(int *p) {
	p[1] = *(p + 1) + 1;
}

void month_print(int *p, int size) {
	printf("다섯개씩 정렬 : ");
	for (int i = 0; i < size; i++)
	{
		if(i % 5 == 0) 
		{
			printf("\n");
		}
		printf("%d ", p[i]);
	}
}

void reverse(double *pd, int size) {
	printf("\n리버스 배열 : ");
	for (int i = size-1; i >= 0; i--)
	{
		printf("%.1lf ", pd[i]);
	}
}


