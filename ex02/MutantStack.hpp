#pragma once
#include <algorithm>
#include <vector>
#include <stack>

template <typename T> class MutantStack: std::stack<T>
{
	private:
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& copy);
		~MutantStack();
		MutantStack<T>& operator=(const MutantStack<T>& copy);
		class iterator
		{

		};
};

#include "MutantStack.tpp"