#include <iostream>
#include "header1.h"
#include "header2.h"

//using namespace header2;	// header2::�� �Ⱥٿ��� �Լ�ȣ�� ���� but �������� ����
int main() {
	header1::top();  // �˾Ƽ� header1::foo() �� ����ȴ�.
	header2::bar();  // header2::foo() �� ����ȴ�.
	
	std::cout << header1::foo() << std::endl;

	return 0;
}
