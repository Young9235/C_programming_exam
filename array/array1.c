#include <stdio.h>
#include <string.h>

void twoarray() 
{
	int num[4][5];
	int i, j, size;
	size = sizeof(num) / sizeof(num[0]);

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
}

void fruitarray() 
{
	char fruit[5][19];
	int fruit_size = sizeof(fruit) / sizeof(fruit[0]);
	int len = 0;
	int max = 0;
	int index = 0;

	printf("5���� �����̸� �Է� : ");
	for (int i = 0; i < fruit_size; i++)
	{
		scanf("%s", fruit[i]);
	}
	//printf("���� �̸� : ");
	for (int i = 0; i < fruit_size; i++)
	{
		len = strlen(fruit[i]);
		//max = len;
		if (max < len) {
			max = len;
			index = i;
		}
	}
	printf("���� ���� �� ������ �̸� : %s", fruit[index]);

}

void game() 
{
	int *num[3] = {"����", "����", "��"};
	int n;

	while (1)
	{
		printf("���� �Է� : ");
		scanf("%d", &n);
		if (n < 0) break;

		printf("%s\n", num[(n - 1) % 3]);
	}

}

int main(void)
{
	game();

	return 0;
}

