#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vec = {1, 2, 3, 4, 5};

	std::cout << "vec = {";
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ", ";
	std::cout << "}" << std::endl;
	std::cout << "Try to find \"4\": " << std::endl;
	std::vector<int>::iterator it = easyfind(vec, 4);
	int index = std::distance(vec.begin(), it);
	std::cout << *it << " found in index " << index << std::endl;

	std::cout << "Try to find \"10\": " << std::endl;
	try
	{
		it = easyfind(vec, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
