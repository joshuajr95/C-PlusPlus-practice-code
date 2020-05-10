#include <iostream>
#include <string>


int main(int argc, char* argv[])
{
	std::string greeting = "Hello";
	std::string complete_greeting = greeting + " there";
	complete_greeting.append(", Josh");
	complete_greeting.insert(4, "      ");
	complete_greeting += "!";
	
	std::cout << complete_greeting << std::endl;
	std::cout << complete_greeting.length() << std::endl;
	std::cout << complete_greeting.size() << std::endl;
	
	return 0;
}
