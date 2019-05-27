#include<stdio.h>

int main(void)
{
	int use_kw, total_fee, fee_kw;
	int default_fee = 0;

	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d", &use_kw);

	if (use_kw > 0 && use_kw <= 100) default_fee = 370;
	else if (use_kw > 101 && use_kw <= 200) default_fee = 660;
	else if (use_kw > 201 && use_kw <= 300) default_fee = 1130;
	else if (use_kw > 301 && use_kw <= 400) default_fee = 2710;
	else if (use_kw > 401 && use_kw <= 500) default_fee = 5130;
	else default_fee = 9330;

	if (use_kw <= 100) {
		fee_kw = 100 * 52.0;
	}
	else if (use_kw <= 200) {
		fee_kw = 100 * 52.0;
		fee_kw += (use_kw - 100) * 88.5;
	}
	else if (use_kw <= 300) {
		fee_kw = 100 * 52.0;
		fee_kw += 100 * 88.5;
		fee_kw += (use_kw - 200) * 127.8;
	}
	else if (use_kw <= 400) {
		fee_kw = 100 * 52.0;
		fee_kw += 100 * 88.5;
		fee_kw += 100 * 127.8;
		fee_kw += (use_kw - 300) * 184.3;
	}
	else if (use_kw <= 500) {
		fee_kw = 100 * 52.0;
		fee_kw += 100 * 88.5;
		fee_kw += 100 * 127.8;
		fee_kw += 100 * 184.3;
		fee_kw += (use_kw - 400) * 274.3;
	}
	else {
		fee_kw = 100 * 52.0;
		fee_kw += 100 * 88.5;
		fee_kw += 100 * 127.8;
		fee_kw += 100 * 184.3;
		fee_kw += 100 * 274.3;
		fee_kw += (use_kw - 500) * 494.0;
	}

	total_fee = default_fee + fee_kw + ((default_fee + fee_kw)*0.09);

	printf("이번달 요금은 %d입니다.\n", total_fee);

	return 0;
}