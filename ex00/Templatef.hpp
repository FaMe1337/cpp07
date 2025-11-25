/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templatef.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:04:47 by marvin            #+#    #+#             */
/*   Updated: 2025/11/24 14:04:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEMPLATEF_HPP
#define TEMPLATEF_HPP
#include <iostream>

template <typename T> 
void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T> 
const T  &max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

template <typename T> 
const T &min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

#endif