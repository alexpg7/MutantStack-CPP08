#include "Span.hpp"
#include <iostream>
#include <time.h>

int main(void)
{
	Span	span(10);

	srand(time(NULL));
	std::cout << "---10 numbers (0 to 9)---" << std::endl;
	for (int i = 0; i < 10; i++)
		span.addNumber(i);
	std::cout << "Longest Span: " << span.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;

	std::cout << "\n---30 000 random numbers---" << std::endl;
	Span	span2(30000);
	for (int i = 0; i < 30000; i++)
		span2.addNumber(rand() % 100000);
	std::cout << "Longest Span: " << span2.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << span2.shortestSpan() << std::endl;
}
