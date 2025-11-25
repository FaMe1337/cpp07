/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:59:18 by marvin            #+#    #+#             */
/*   Updated: 2025/11/24 14:59:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

#include <iostream>

template <typename T>
void iter(const T *arr, const int length, void(*f)(const T &))
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void iter(T *arr, const int length, void(*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T> 
void print(const T *arr, const int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << std::endl;
}

template <typename T> 
void print(const T &f)
{
	std::cout << f << std::endl;
}

#endif