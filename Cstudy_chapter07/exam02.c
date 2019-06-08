#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int n, tot;
	
	printf("1부터 n까지의 합을 위한 n값 입력 : ");
	scanf("%d", &n);
	tot = rec_func(n);

	printf("합계 : %d\n", tot);

	return 0;
}

int rec_func(int n)
{
	/*
	int count = 0, total = 0;

	for (int i = 0; i < n; i++)
	{
		count++;
		total += count;
	}
	*/
	//printf("%d", total);
	
	int total;
	
	if (n == 1) total = 1;
	else total = n + rec_func(n - 1);
	
	return total;
}