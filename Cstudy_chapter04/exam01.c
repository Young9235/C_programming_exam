#include<stdio.h>

// 도전1. 체중관리 프로그램
int main(void)
{	
	int weight;
	double height, BMI;
	
	printf("몸무게와 키 입력 : ");
	scanf("%d %lf", &weight, &height);
	height *= 0.01;
	BMI = (weight / (height * height));
	printf("BMI 지수 : %.1lf", BMI);

	if (BMI >= 20.0 && BMI <= 25.0) printf("\n표준입니다.");
	else printf("\n체중관리가 필요합니다.");
	
	return 0;
}