#include<stdio.h>

// 도전3. 자동차 주행시간 측정 프로그램
int main(void)
{
	int distance_km, speed_kmh, hour, minute;
	double hour_min, second;

	printf("거리와 속력 입력 : ");
	scanf("%d %d", &distance_km, &speed_kmh);

	hour = distance_km / speed_kmh;
	hour_min = ((double)distance_km / (double)speed_kmh) - hour;
	
	minute = hour_min * 60;
	hour_min = (double)((hour_min * 60) - minute);

	second = hour_min * 60;

	printf("\n소요시간은 %d시간 %d분 %.3lf초입니다.", hour, minute, second);
	
	return 0;
}