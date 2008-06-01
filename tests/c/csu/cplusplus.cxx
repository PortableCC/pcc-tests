#include <iostream>

class Test
{
	public:
		Test() { std::cout << "constructor" << std::endl; }
		~Test() { std::cout << "destructor" << std::endl; }
};

Test test;

int
main()
{
	std::cout << "main" << std::endl;
	return 0;
}
