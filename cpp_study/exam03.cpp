#include <iostream>
#include "header1.h"
#include "header2.h"

//using namespace header2;	// header2::을 안붙여도 함수호출 가능 but 권장하지 않음
int main() {
	header1::top();  // 알아서 header1::foo() 가 실행된다.
	header2::bar();  // header2::foo() 가 실행된다.
	
	std::cout << header1::foo() << std::endl;

	return 0;
}
