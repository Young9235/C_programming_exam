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
		printf("�����б� ��ϱ��� %d���� �Դϴ�.\n", college_fee);
	}
	else if (rich < 100) {
		aword = college_fee * 0.4;
		college_fee -= aword;
		printf("�����б� ��ϱ��� %d���� �Դϴ�.\n", college_fee);
	}
	else {
		printf("���б� �����Ф� ��ϱ�100����...\n");
	}

	return 0;
}