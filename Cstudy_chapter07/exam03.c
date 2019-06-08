#include <stdio.h>

int prime_check(int n);

int main(void)
{
	int i, num, rtn, cnt = 0;

	printf("# ��� �Է� : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)			// �Է� �� ���� ���� ���
	{
		if (prime_check(i) == 1)		// �Է°� ���� �Ҽ��� �͸� ���
		{
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0) printf("\n");
		}
		if (prime_check(i) == 1) rtn = 1;
		else if (prime_check(i) == 0) rtn = 0;
	}

	if (rtn == 1) printf("\n �Ҽ� �Դϴ�.");
	else printf("\n �Ҽ��� �ƴմϴ�.");

	return 0;
}

int prime_check(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0) {
			return 0;		// �Ҽ��� �ƴ� ���� return �� false
		}
	}

	return 1;		// �Ҽ� �� �� return �� true
}