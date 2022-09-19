#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T *address, unsigned len, void (*f)(T const &val))
{
	for (unsigned i = 0; i < len; i++)
	{
		f(address[i]);
	}
}

#endif