#include<stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
	int kor, eng, mat, tot;
	double evg;
	printf("# �� ���� ���� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &mat);
	
	print_title();
	tot = total(kor, eng, mat);
	evg = average(tot);
	
	printf("  %3d   %3d   %3d   %3d   %3.1lf  \n", kor, eng, mat, tot, evg);
	
	return 0;
}

int total(int kor, int eng, int mat)
{
	int tot = kor + eng + mat;

	return tot;
}

double average(int tot)
{
	double evg = tot / 3.0;
	
	return evg;
}

void print_title(void)
{
	printf("\n  =====< ����ǥ >=====\n\n");
	printf("-------------------------------\n");
	printf("  ����  ����  ����  ����  ��� \n");
	printf("-------------------------------\n");
}