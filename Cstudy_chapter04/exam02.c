#include<stdio.h>

// ����2. ĳ�� ���α׷�
int main(void)
{
	int priceA, priceB, priceC;
	int change, chan_5000, chan_1000, chan_500, chan_100, chan_50, chan_10; 
	
	printf("3���� ���� ���� �Է��ϼ��� : ");
	scanf("%d %d %d", &priceA, &priceB, &priceC);
	
	change = 10000 - (priceA + priceB + priceC);
	printf("�Ž������� %d�Դϴ�.\n", change);

	if (change >= 5000) 
	{
		chan_5000 = change / 5000;
		printf("��õ���� : %d��\n", chan_5000);
		change %= 5000;
	}
	if (change < 5000 && change >= 1000)
	{
		chan_1000 = change / 1000;
		printf("õ���� : %d��\n", chan_1000);
		change %= 1000;
	}
	if (change < 1000 && change >= 500)
	{
		chan_500 = change / 500;
		printf("�����¥�� ���� : %d��\n", chan_500);
		change %= 500;
	}
	if (change < 500 && change >= 100)
	{
		chan_100 = change / 100;
		printf("���¥�� ���� : %d��\n", chan_100);
		change %= 100;
	}
	if (change < 100 && change >= 50)
	{
		chan_50 = change / 50;
		printf("���ʿ�¥�� ���� : %d��\n", chan_50);
		change %= 50;
	}
	if (change < 50 && change >= 10)
	{
		chan_10 = change / 10;
		printf("�ʿ�¥�� ���� : %d��\n", chan_10);
		change %= 10;
	}
	
	return 0;
}