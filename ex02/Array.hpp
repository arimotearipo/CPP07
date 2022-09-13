#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include "colours.h"

using std::cout;
using std::endl;
using std::ostream;

template<typename T>
class Array
{
	public:
		Array(void) : arr(nullptr), arr_size(0) {};

		Array(unsigned int n) : arr_size(n)
		{
			this->arr = new T[n];
		}

		Array(Array &tocopy) : arr_size(tocopy.size())
		{
			if (this->arr != nullptr)
				delete[] this->arr;
			*this = tocopy;
			this->arr = new T[tocopy.size()];
			for (int i = 0; i < this->arr_size; i++)
				this->arr[i] = tocopy[i];
		}

		Array	&operator=(Array &toassign)
		{
			if (arr != nullptr)
				delete[] this->arr;

			*this = toassign;
			this->arr = new T[toassign.size()];
			for (int i = 0; i < this->arr_size; i++)
				this->arr[i] = toassign[i];
			this->arr_size = toassign.size();
			return (*this);
		}

		~Array(void)
		{
			delete[] this->arr;
		}

		T	&operator[](unsigned int i) const
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
ostream &operator<<(ostream &OS, Array<T> &ARRAY)
{
	OS << "Printing the content of the array..." << endl;
	for (int i = 0; i < ARRAY.size(); i++)
		cout << GRN << ARRAY[i] << " " << RESET;
	return (OS);
}

#endif