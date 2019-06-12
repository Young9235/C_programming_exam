#pragma once
#include <iostream>

namespace header1 {
	int foo()
	{
		return 3+2;
	}
	void top()
	{
		std::cout << "hi" << std::endl
			<< "my name is "
			<< "top" << std::endl;
	}
}