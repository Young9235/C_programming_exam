#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, sum = 0;
	int random = 0; 
	int user_input;  // ����� �Է�
	
	srand(time(NULL));

	random = rand() % 10 + 1; // ���� ����

	std::cout << "1����10������ ���� ���纸����." << std::endl;
	
	while (1)
	{
		std::cout << "�Է�";
		std::cin >> user_input;
		if (random == user_input)
		{
			std::cout << "���߼̽��ϴ�~" << std::endl;
			break;
		}
		else
		{
			std::cout << "�ٽ� �����غ�����." << std::endl;
		}
	}

	return 0;
}