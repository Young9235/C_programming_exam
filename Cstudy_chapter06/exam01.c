#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int input_num = 0;
	srand(time(NULL));
	int random = (rand() % 30) + 1;
	int times = 1;
	//printf("%d\n", random);

	while (1)
	{
		printf("\n�����Է�(1���� 30����) : ");
		scanf("%d", &input_num);
		
		if (random > input_num)
		{
			printf("%d���� Ů�ϴ�!", input_num);
			times++;
		}
		else if (random < input_num)
		{ 
			printf("%d���� �۽��ϴ�!", input_num);
			times++;
		}
		else
		{ 
			printf("�����Դϴ�!\n");
			printf("�õ��� Ƚ���� %dȸ �Դϴ�.", times);
			break;
		}
	}
	
	
	return 0;
}