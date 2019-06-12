#pragma once
#include <iostream>

namespace header2 {
	int foo();
	void bar()
	{
		std::cout << "hi" << std::endl
			<< "my name is "
			<< "bar" << std::endl;
	}
}