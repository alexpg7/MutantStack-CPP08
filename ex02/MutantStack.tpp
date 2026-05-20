#include "MutantStack.hpp"
#include <stdexcept>

template <typename T> MutantStack<T>::MutantStack(): _N(0)
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T>& copy)
{
	*this = copy;
}
template <typename T> MutantStack<T>::~MutantStack()
{
}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

template <typename T> MutantStack<T>::iterator	begin(void)
{

}
template <typename T> MutantStack<T>::iterator	end(void)
{

}

template <typename T> MutantStack<T>::iterator::iterator()
{
}

template <typename T> MutantStack<T>::iterator::iterator(const MutantStack<T>::iterator& copy)
{
	*this = copy;
}
template <typename T> MutantStack<T>::iterator::~iterator()
{
}

template <typename T> MutantStack<T>& MutantStack<T>::iterator::operator=(const MutantStack<T>& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}