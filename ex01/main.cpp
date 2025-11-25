/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:22:29 by marvin            #+#    #+#             */
/*   Updated: 2025/11/24 15:22:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename F>
void add(F &data)
{
	data += 65;
}

int main( void )
{
	int arr[] = {42, 39 , 1337};
	const int arr2[] = {42, 39, 1337};

	iter( arr, 3, add);
	print(arr, 3);
	iter(arr2, 3, print);

	std::string str[] = {"a", "b", "c"};
	iter(str, 3, add);
	print(str, 3);
}