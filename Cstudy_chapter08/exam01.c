#include<stdio.h>

int main()
{
	int score[5] = {0};
	int i , max, min, total_score = 0, h_index, l_index;
	double use_score = 0.0;
	int size = sizeof(score) / sizeof(int); 

	printf("5���� �ɻ����� ���� �Է� : ");
	
	for (i = 0; i < size; i++)
	{
		scanf("%d", &score[i]);
		total_score += score[i];
	}

	max = score[0];
	min = score[0];

	for (i = 1; i < size; i++)
	{	
		if (score[i] > max) {
			max = score[i];
			//printf("\ni1 : %d\n", i);
			h_index = i;
		}
		if (score[i] < min) {
			min = score[i];
			//printf("\ni2 : %d\n", i);
			l_index = i;
		}
		
	}
	
	printf("��ȿ���� : ");
	for (i = 0; i < size; i++)
	{
		if (!(h_index == i) && !(l_index == i))
			printf("%3d", score[i]);
	}
	printf("\n");
	
	use_score = total_score - (max + min);

	//printf("\n�ִ밪 : %d\n", max);
	//printf("�ּҰ� : %d\n", min);
	
	printf("��� : %.1lf\n", use_score/3);
	return 0;
}