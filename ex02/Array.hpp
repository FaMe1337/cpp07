/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:42:13 by marvin            #+#    #+#             */
/*   Updated: 2025/11/25 17:42:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP
#define MAX_VAL 10

#include <iostream>
#include <stdlib.h>

template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();
		Array &operator=(const Array &src);
		T &operator[](unsigned int n);
		T const &operator[](unsigned int n) const;

		unsigned int size() const;

		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private :
		T *_arr;
		unsigned int _size;
};

#include "Array.tpp"

template <typename T> std::ostream &operator<<(std::ostream &c, const Array<T> &src);

#endif	