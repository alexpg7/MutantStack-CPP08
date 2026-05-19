#include "Span.hpp"
#include <stdexcept>

Span::Span(): _N(0)
{
}

Span::Span(unsigned int N): _N(N)
{
}
Span::Span(const Span& copy)
{
	*this = copy;
}
Span::~Span()
{
}

Span& Span::operator=(const Span& copy)
{
	if (this == &copy)
		return (*this);
	_N = copy._N;
	_list = copy._list;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_list.size() == _N)
		throw std::exception();
	_list.push_back(num);
}

unsigned int	Span::longestSpan()
{
	if (_list.size() <= 1)
		throw std::exception();
	return (std::max_element(_list.begin(), _list.end()) - std::min_element(_list.begin(), _list.end()));
}

unsigned int	Span::shortestSpan()
{
	if(_list.size() < 2)
		throw std::exception();
	std::vector<int> tmp = _list;
	std::sort(tmp.begin(), tmp.end());
	long mindiff = (long)tmp[1] - (long)tmp[0];
	for(size_t i = 1; i < tmp.size(); i++)
	{
		long diff = (long)tmp[i] - (long)tmp[i - 1];
		if(diff < mindiff)
			mindiff = diff;
	}
	return (unsigned int)mindiff;
}

template<typename T>void addRange(T begin, T end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}