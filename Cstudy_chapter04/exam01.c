#include<stdio.h>

// ����1. ü�߰��� ���α׷�
int main(void)
{	
	int weight;
	double height, BMI;
	
	printf("�����Կ� Ű �Է� : ");
	scanf("%d %lf", &weight, &height);
	height *= 0.01;
	BMI = (weight / (height * height));
	printf("BMI ���� : %.1lf", BMI);

	if (BMI >= 20.0 && BMI <= 25.0) printf("\nǥ���Դϴ�.");
	else printf("\nü�߰����� �ʿ��մϴ�.");
	
	return 0;
}