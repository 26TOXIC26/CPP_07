/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:22:31 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/14 22:08:43 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename SWAP>
void swap (SWAP &a, SWAP &b)
{
	SWAP temp = a;
	a = b;
	b = temp;
}

template <typename MIN>
MIN min (MIN &a, MIN &b)
{
	if (b <= a)
		return b;
	return a;
}

template <typename MAX>
MAX max (MAX &a, MAX &b)
{
	if (b >= a)
		return b;
	return a;
}

#endif
