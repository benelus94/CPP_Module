/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/28 15:11:18 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "serialize.hpp"
#include <iostream>

int	main()
{
	Data *data = new Data(4, "Kim");
	uintptr_t addr = serialize(data);
	Data *data2 = deserialize(addr);

	std::cout << "first data address: " << data << std::endl;
	std::cout << "i = " << data->get_i() << ", str = " << data->get_str() << std::endl;
	std::cout << "addr serialized: " << addr << std::endl;
	std::cout <<  "addr to hex: "  << std::hex << addr << std::endl;
	std::cout << "deserialized data address: " << data2 << std::endl;
	std::cout << "i = " << data2->get_i() << ", str = " << data2->get_str() << std::endl;

	return (0);
}