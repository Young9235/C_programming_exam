#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, sum = 0;
	int random = 0; 
	int user_input;  // 사용자 입력
	
	srand(time(NULL));

	random = rand() % 10 + 1; // 난수 생성

	std::cout << "1부터10까지의 수를 맞춰보세요." << std::endl;
	
	while (1)
	{
		std::cout << "입력";
		std::cin >> user_input;
		if (random == user_input)
		{
			std::cout << "맞추셨습니다~" << std::endl;
			break;
		}
		else
		{
			std::cout << "다시 생각해보세요." << std::endl;
		}
	}

	return 0;
}