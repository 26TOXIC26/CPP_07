/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:37:19 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/17 18:04:01 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename K>
void plus(K &arr)
{
	arr += 1;
}

template <typename T>
void printElement(T &elem) {
    std::cout << elem << ", ";
}

int main()
{
	int arr[] = {1, 5, 9};
	double arr_d[] = {1.78, 5.52, 9.4};

	std::cout << "before increment: ";
	iter (arr, (sizeof (arr) / sizeof(int)), printElement);
	iter (arr_d, (sizeof (arr_d) / sizeof(double)), printElement);
	std::cout << std::endl;
	iter (arr, (sizeof (arr) / sizeof(int)), plus);
	iter (arr_d, (sizeof (arr_d) / sizeof(double)), plus);
	std::cout << "after increment:  ";
	iter (arr, (sizeof (arr) / sizeof(int)), printElement);
	iter (arr_d, (sizeof (arr_d) / sizeof(double)), printElement);
	std::cout << std::endl;
}
