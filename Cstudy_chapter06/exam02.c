#include <stdio.h>

int main(void)
{
	int num, i, j;
	int count = 0; 

	printf("2�̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++) {
		for (j = 2; j <= i; j++) 
		{
			if (i % j == 0) break;		// ����� ��� break�� ��������
		}	
		if (i == j)
		{
			printf("%5d", i);
			count++;
			if ((count % 5) == 0) printf("\n");
		}
	}

	return 0;
}