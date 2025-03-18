/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:28:43 by amousaid          #+#    #+#             */
/*   Updated: 2025/03/16 23:27:59 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdlib.h>

template <typename K>
class Array
{
	private:
		K *Arr;
		long n;
	public:
		Array() : Arr(NULL), n(0)
		{
			std::cout << "Default Constructer Called" << std::endl;
		}

		Array(unsigned int i) : Arr(new K[i]), n(i)
		{
			std::cout << "Normal Constructer Called" << std::endl;
		}

		Array(const Array &src)
		{
			std::cout << "Copy Constructor Called" << std::endl;
			this->n = src.n;
			if (this->n > 0)
			{
				this->Arr = new K[this->n];
				for (unsigned int i = 0; i < this->n; i++)
					this->Arr[i] = src.Arr[i];
			}
			else
				this->Arr = NULL;
		}

		~Array()
		{
			delete [] Arr;
			std::cout << "Destructor Called" << std::endl;
		}

		Array &operator=(const Array &src)
		{
			if (this == &src)
				return *this;
			delete [] this->Arr;
			std::cout << "= Operator Called" << std::endl;
			this->n = src.n;
			if (this->n != 0)
			{
				this->Arr = new K[src.n];
				for (int i = 0; i < this->n; i++)
					this->Arr[i] = src.Arr[i];
			}
			else
				this->Arr = NULL;
			return *this;
		}

		class Invalid_Index : public std::exception
		{
			public:
				virtual const char*what() const throw()
				{
					return ("INVALID INDEX!");
				}
		};

		K &operator[](long i) const
		{
			if (i < 0 || i >= this->n || this->Arr == NULL)
				throw Invalid_Index();
			return (this->Arr[i]);
		}

		unsigned long size () const
		{
			return (this->n);
		}
};

#endif
