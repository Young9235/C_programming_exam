#include<stdio.h>

// ����3. �ڵ��� ����ð� ���� ���α׷�
int main(void)
{
	int distance_km, speed_kmh, hour, minute;
	double hour_min, second;

	printf("�Ÿ��� �ӷ� �Է� : ");
	scanf("%d %d", &distance_km, &speed_kmh);

	hour = distance_km / speed_kmh;
	hour_min = ((double)distance_km / (double)speed_kmh) - hour;
	
	minute = hour_min * 60;
	hour_min = (double)((hour_min * 60) - minute);

	second = hour_min * 60;

	printf("\n�ҿ�ð��� %d�ð� %d�� %.3lf���Դϴ�.", hour, minute, second);
	
	return 0;
}