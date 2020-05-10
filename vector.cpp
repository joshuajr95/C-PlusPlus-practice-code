#include <iostream>
#include <vector>


int main(int argc, char* argv[])
{
	std::vector<int> data;
	//data.push_back({1, 2, 3, 5, 6, 9, 23, 54, 1, 3, 4, 87, 56, 4, 9, 0});
	data.push_back(12);
	std::cout << data.size() << std::endl;
	std::cout << data[data.size() - 1] << std::endl;
	data.pop_back();
	//std::cout << data[data.size() - 1] << std::endl;

	std::vector<std::string> string_data;
	string_data.push_back("Hello");
	std::cout << string_data[string_data.size() - 1] << std::endl;
	
	std::vector<int> more_data(5);
	
	more_data[0] = 0;
	more_data[1] = 1;
	more_data[2] = 2;
	more_data[3] = 3;
	more_data[4] = 4;
	
	for(int i = 0; i < more_data.size(); i++)
	{
		std::cout << more_data[i] << std:: endl;
	}
	
	return 0;
}
