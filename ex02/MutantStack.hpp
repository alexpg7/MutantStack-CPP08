#pragma once
#include <algorithm>
#include <vector>
#include <stack>

template <typename T> class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& copy);
		~MutantStack();
		MutantStack<T>& operator=(const MutantStack<T>& copy);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"