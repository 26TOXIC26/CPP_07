/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:30:48 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/17 18:07:10 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename A>
void iter(A *array, size_t len, void (*fun)(A &))
{
	if (!array || !fun)
		return ;
	for (size_t i = 0; i < len; i++)
		fun(array[i]);
}

#endif
