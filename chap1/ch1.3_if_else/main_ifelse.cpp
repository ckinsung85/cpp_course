#include <iostream>

int main(){

	int x = 0;

	std::cout << "Type a number \n";

	std::cin >> x;

	if (x == 42)
	{
		std::cout << "Number typed = " << x << std::endl;
	}
	else
	{
		std::cout << "Number typed WRONG" << std::endl;
	}

}
