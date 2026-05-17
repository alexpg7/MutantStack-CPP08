#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	int	*list = new int[5]();

	for (int i = 0; i < 5; i++)
		list[i] = i;
	std::cout << "Find \"4\": " << easyfind(list, 4) << std::endl;
}
