#include <stdio.h>

int main(void)
{
	int num, i, j;
	int count = 0; 

	printf("2이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++) {
		for (j = 2; j <= i; j++) 
		{
			if (i % j == 0) break;		// 배수인 경우 break로 빠져나옴
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