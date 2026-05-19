#pragma once
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int	_N;
		std::vector<int>	_list;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();
		Span& operator=(const Span& copy);
		void						addNumber(int num);
		template<typename T>void	addRange(T begin, T end);
		unsigned int				shortestSpan();
		unsigned int				longestSpan();
};