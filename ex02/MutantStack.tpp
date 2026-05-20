#include "MutantStack.hpp"
#include <stdexcept>

template <typename T> MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T>& copy): std::stack<T>(copy)
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

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}