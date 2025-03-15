/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:28:43 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/15 00:36:40 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename K>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array &src);
		~Array();
};

#endif
