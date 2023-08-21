#include <iostream>

int main(){

	int x = 0;

	std::cout << "Please type a number" << std::endl;
	std::cin >> x;

	while (x != 42)
	{
		std::cout << "Number typed is wrong! Retype " << std::endl;
		std::cin >> x;
	}

	std::cout << "Congratulation! Correct!" << std::endl;

}
