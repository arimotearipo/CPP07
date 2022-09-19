#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include "colours.h"

using std::cout;
using std::endl;
using std::ostream;

template<typename T>
class Array
{
	public:
		Array(void) : arr(NULL), arr_size(0) {};

		Array(unsigned int n) : arr_size(n)
		{
			this->arr = new T[n];
		}

		Array	&operator=(Array &toassign)
		{
			if (this->arr_size != 0)
				delete[] this->arr;
			this->arr = new T[toassign.size()];
			this->arr_size = toassign.size();
			for (unsigned int i = 0; i < this->arr_size; i++)
				this->arr[i] = toassign[i];
			return (*this);
		}

		Array(Array &tocopy)
		{
			this->arr_size = tocopy.size();
			this->arr = new T[this->arr_size];
			for (unsigned int i = 0; i < this->arr_size; i++)
				this->arr[i] = tocopy[i];
		}

		~Array(void)
		{
			if (this->arr != NULL)
			{
				delete[] this->arr;
				this->arr = NULL;
			}
		}

		T	&operator[](unsigned int i)
		{
			if (i >= this->arr_size)
				throw SegFault();
			return (this->arr[i]);
		}
	
		unsigned int	size(void) const
		{
			return (this->arr_size);
		}

		class SegFault : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception : segmentation fault muahahahaha feels good");
				}
		};

	private:
		T				*arr;
		unsigned int	arr_size;
};

template<typename T>
ostream &operator<<(ostream &_os, Array<T> &_array)
{
	// OS << "Printing the content of the array..." << endl;
	for (unsigned int i = 0; i < _array.size(); i++)
		_os << GRN << _array[i] << " " << RESET;
	return (_os);
}

#endif