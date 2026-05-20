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
		/*class iterator
		{
			private:
				unsigned int	index;
				std::stack<T>	*_stack;
			public:
				iterator(void);
				iterator(MutantStack<T>::iterator& copy);
				~iterator(void);
				MutantStack<T>::iterator&	operator=(const MutantStack<T>::iterator& it);
				MutantStack<T>::iterator&	operator++();
				MutantStack<T>::iterator	operator++(MutantStack<T>::iterator it);
				MutantStack<T>::iterator&	operator--();
				MutantStack<T>::iterator	operator--(MutantStack<T>::iterator it);
				T	operator*(const MutantStack<T>::iterator& it);
		};*/
};

#include "MutantStack.tpp"