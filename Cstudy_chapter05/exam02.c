#include<stdio.h>

int main(void)
{
	int rich = 150;
	double grade = 4.3;
	int college_fee = 100;
	int aword;
	
	if (rich >= 100 && grade >= 4.0) {
		aword = college_fee * 0.2;
		college_fee -= aword;
		printf("다음학기 등록금은 %d만원 입니다.\n", college_fee);
	}
	else if (rich < 100) {
		aword = college_fee * 0.4;
		college_fee -= aword;
		printf("다음학기 등록금은 %d만원 입니다.\n", college_fee);
	}
	else {
		printf("장학금 없음ㅠㅠ 등록금100만원...\n");
	}

	return 0;
}