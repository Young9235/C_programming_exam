#include<stdio.h>

int main(void)
{
	int num1, num2;
	int i = 0;
	int res = 0;
	char operator, endKey;

	//printf("\n num1 : %d\n operator : %d\n num2 : %d\n", num1, operator, num2);
	while (1)
	{
		i++;
		printf("\n\n[실행결과 %d]\n", i);
		printf("사칙연산 입력(정수) : ");

		scanf("%d%c%d", &num1, &operator, &num2);


		if ((int)operator == 47) {
			res = num1 / num2;
			printf("실행결과 : %d/%d=%d", num1, num2, res);
			
		}
		else if ((int)operator == 42) {
			res = num1 * num2;
			printf("실행결과 : %d*%d=%d", num1, num2, res);
		}
		else if ((int)operator == 43) {
			res = num1 + num2;
			printf("실행결과 : %d+%d=%d", num1, num2, res);
		}
		else if ((int)operator == 45) {
			res = num1 - num2;
			printf("실행결과 : %d-%d=%d", num1, num2, res);
		}

		if (num1 == 0 && (int)operator == 63 && num2 == 0) break;
		
	}

	return 0;
}