/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:54:39 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/30 16:46:09 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
	private:
		T	*data;
		unsigned int	_size;
	public:
		Array() : data(new T[0]), _size(0) {}
		Array(unsigned int n) : data(new T[n]()), _size(n) {}
		Array(const Array &arr)
		{
			_size = arr.size();
			data = new T[_size];
			if (arr.data)
			{
				for (int i = 0; i < (int)_size; i++)
					data[i] = arr.data[i];
			}
		};

		Array &operator=(const Array &arr)
		{
			_size = arr.size();
			data = new T[_size];
			if (arr.data)
			{
				for (int i = 0; i < (int)_size; i++)
					data[i] = arr.data[i];
			}
		};

		T &operator[](unsigned int i)
		{
			if (i > _size - 1)
				throw OutOfBound();
			return (data[i]);
		};

		~Array() 
		{
			if (this->data)
				delete[] data;
		};

		unsigned int	size() const {return (_size);};

		// Exception
		class OutOfBound : public std::exception
		{
			public:
				const char *what() const throw() {return ("Out of bound");};
		};
};
#endif