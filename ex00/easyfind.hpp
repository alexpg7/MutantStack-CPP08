#pragma once
#include <iostream>>

template <typename T> int easyfind(T container, int n)
{
	unsigned int	i = 0;

	while (container[i])
	{
		std::cout << container[i] << std::endl;
		if (container[i] == n)
			return (i);
		i++;
	}
	return (-1);
}
