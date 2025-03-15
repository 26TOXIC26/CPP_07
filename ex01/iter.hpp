/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:30:48 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/15 00:02:06 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename A>
void iter(A *array, int len, void (*fun)(A &))
{
	for (int i = 0; i < len; i++)
		fun(array[i]);
}

#endif
