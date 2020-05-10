#include <iostream>



int main(int argc, char const *argv[])
{
	int data[5] = {1,2,3,4,5};

	// this style of for loop allows i to iterate over items in data in a similar
	// manner to python. The analogous python code would be – for i in data: * code*
	for (int i : data)
	{
		std::cout << i << "\t";
	}

	std::cout << std::endl;

	return 0;
}