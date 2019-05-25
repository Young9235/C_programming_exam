#include<stdio.h>

// 도전2. 캐셔 프로그램
int main(void)
{
	int priceA, priceB, priceC;
	int change, chan_5000, chan_1000, chan_500, chan_100, chan_50, chan_10; 
	
	printf("3개의 물건 값을 입력하세요 : ");
	scanf("%d %d %d", &priceA, &priceB, &priceC);
	
	change = 10000 - (priceA + priceB + priceC);
	printf("거스름돈은 %d입니다.\n", change);

	if (change >= 5000) 
	{
		chan_5000 = change / 5000;
		printf("오천원권 : %d장\n", chan_5000);
		change %= 5000;
	}
	if (change < 5000 && change >= 1000)
	{
		chan_1000 = change / 1000;
		printf("천원권 : %d장\n", chan_1000);
		change %= 1000;
	}
	if (change < 1000 && change >= 500)
	{
		chan_500 = change / 500;
		printf("오백원짜리 동전 : %d개\n", chan_500);
		change %= 500;
	}
	if (change < 500 && change >= 100)
	{
		chan_100 = change / 100;
		printf("백원짜리 동전 : %d개\n", chan_100);
		change %= 100;
	}
	if (change < 100 && change >= 50)
	{
		chan_50 = change / 50;
		printf("오십원짜리 동전 : %d개\n", chan_50);
		change %= 50;
	}
	if (change < 50 && change >= 10)
	{
		chan_10 = change / 10;
		printf("십원짜리 동전 : %d개\n", chan_10);
		change %= 10;
	}
	
	return 0;
}