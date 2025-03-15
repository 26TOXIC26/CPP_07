/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:37:19 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/15 00:07:29 by amousaid         ###   ########.fr       */
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
	int arr[3] = {1, 5, 9};
	double arr_d[3] = {1.78, 5.52, 9.4};

	std::cout << "before increment: ";
	iter (arr, 3, printElement);
	iter (arr_d, 3, printElement);
	std::cout << std::endl;
	iter (arr, 3, plus);
	iter (arr_d, 3, plus);
	std::cout << "after increment:  ";
	iter (arr, 3, printElement);
	iter (arr_d, 3, printElement);
	std::cout << std::endl;
}
