#include "Span.hpp"
#include <stdexcept>

Span::Span(): _N(0)
{
	_list = nullptr;
}

Span::Span(unsigned int N): _N(N)
{
	_list = new int[N]();
}
Span::Span(const Span& copy)
{
	*this = copy;
}
Span::~Span()
{
	if (_list)
		delete[] _list;
}

Span& Span::operator=(const Span& copy)
{
	if (this == &copy)
		return (*this);
	_N = copy._N;
	_stored = copy._stored;
	if (_list)
		delete[] _list;
	_list = new int[_N]();
	for (int i = 0; i < _N; i++)
		_list[i] = copy._list[i];
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_stored == _N)
		throw std::exception();
	_list[_stored++] = num;
}

unsigned int	Span::longestSpan()
{
	if (_stored <= 1)
		throw std::exception();
	return (std::max_element(_list, _list + _stored) - std::min_element(_list, _list + _stored));
}