#include <stdio.h>

int prime_check(int n);

int main(void)
{
	int i, num, rtn, cnt = 0;

	printf("# 양수 입력 : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)			// 입력 값 까지 숫자 출력
	{
		if (prime_check(i) == 1)		// 입력값 까지 소수인 것만 출력
		{
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0) printf("\n");
		}
		if (prime_check(i) == 1) rtn = 1;
		else if (prime_check(i) == 0) rtn = 0;
	}

	if (rtn == 1) printf("\n 소수 입니다.");
	else printf("\n 소수가 아닙니다.");

	return 0;
}

int prime_check(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0) {
			return 0;		// 소수가 아닌 것은 return 값 false
		}
	}

	return 1;		// 소수 인 것 return 값 true
}