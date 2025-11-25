/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:42:14 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 17:42:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _arr(NULL), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n){
}

template <typename T>
Array<T>::Array(const Array &src): _arr(NULL), _size(0)
{
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		delete [] this->_arr;
		this->_size = src.size();
		this->_arr = new T[src.size()];
		for (unsigned int i = 0; i < _size; i++)
			this->_arr[i] = src._arr[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw OutOfBoundException();
	return (_arr[n]);
}

template <typename T>
T const &Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw OutOfBoundException();
	return (_arr[n]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
	return ("Index out of bounds!");
}

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &src)
{
	for (size_t i = 0; i < src.size(); i++)
		out << "pos " << i << " is " << src[i] << std::endl;
	return (out);
}
