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