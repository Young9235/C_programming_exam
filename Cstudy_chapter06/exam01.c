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
		printf("\n숫자입력(1부터 30까지) : ");
		scanf("%d", &input_num);
		
		if (random > input_num)
		{
			printf("%d보다 큽니다!", input_num);
			times++;
		}
		else if (random < input_num)
		{ 
			printf("%d보다 작습니다!", input_num);
			times++;
		}
		else
		{ 
			printf("정답입니다!\n");
			printf("시도한 횟수는 %d회 입니다.", times);
			break;
		}
	}
	
	
	return 0;
}