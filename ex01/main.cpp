#include "Span.hpp"
#include <iostream>

int main(void)
{
	Span	span(10);

	for (int i = 0; i < 10; i++)
		span.addNumber(i);
	std::cout << "Longest Span: " << span.longestSpan() << std::endl;
}
