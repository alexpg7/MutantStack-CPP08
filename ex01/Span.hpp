#pragma once
#include <algorithm>

class Span
{
	private:
		unsigned int	_N;
		int				*_list;
		unsigned int	_stored = 0;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();
		Span& operator=(const Span& copy);
		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};