#include <stdio.h>

int main(void)
{
	int year, month, day, week;

	printf("> 년, 월을 입력하세요(종료는 0) : ");
	scanf("%d %d", &year, &month);
	
	printf("\n %d년 %d월", year, month);
	printf("\n==============\n");
	printf("\n-----------------------------\n");
	printf("\nSUN MON TUE WED THU FRI SAT\n");
	printf("\n-----------------------------\n");

	//if(month == 1) day = 31;

	if (day % 7 == 0) printf("SUN");
	else if (day % 7 == 1) printf("MON");
	else if (day % 7 == 2) printf("TUE");
	else if (day % 7 == 3) printf("WED");
	else if (day % 7 == 4) printf("THU");
	else if (day % 7 == 5) printf("FRI");
	else if (day % 7 == 6) printf("SAT");

	for (int i = 1; i <= day; i++)
	{

	}

	return 0;
}