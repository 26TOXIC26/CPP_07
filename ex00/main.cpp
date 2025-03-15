/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:39:13 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/14 22:11:00 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main ()
{
	int x = 5, y = 10;
    double a = 3.14, b = 2.71;
    std::string s1 = "hello", s2 = "world";

	std::cout << "a: " << a << "   b: " << b << std::endl;
	swap (a, b);
	std::cout << "a: " << a << "   b: " << b << std::endl;

	std::cout << "Min(5, 10) = " << min(x, y) << std::endl;
    std::cout << "Max(3.14, 2.71) = " << max(a, b) << std::endl;
    std::cout << "Min(hello, world) = " << min(s1, s2) << std::endl;
}
