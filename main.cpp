#include "convertBase.h"
#include <iostream>
#include <exception>

int main(int argc, char** argv){
	try {
		unsigned input, input2;
		ConvertBase baseConverter;
		
		std::cout << "Enter an integer(+) to convert: ";
		std::cin >> input;
		std::cout << "Enter the base to convert to: ";
		std::cin >> input2;
		
		baseConverter.setBase(input2);
		baseConverter.toNewBase(input);
	}
	catch (const std::exception &ex) {
		std::cerr << ex.what();
	}
	std::cout <<  std::endl;
	return 0;
}
