/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/10 16:51:07 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include <iostream>

int main()
{
    Array<int> intlist(5);
    Array<std::string> stringlist(2);

    stringlist[0] = "good";
    stringlist[1] = "test";

    std::cout << "String array : " << std::endl;
    for (int i = 0; i < (int)stringlist.size(); i++)
        std::cout << "list[" << i << "] = " << stringlist[i] << std::endl;
		
    std::cout << std::endl;

    Array<std::string> copylist(stringlist);
	std::cout << "Copy list :" << std::endl;
	for (int i = 0; i < (int)stringlist.size(); i++)
        std::cout << "copylist[" << i << "] = " << stringlist[i] << std::endl;
		
    std::cout << "Change list[0] to 'bad'" << std::endl;
    stringlist[0] = "bad";
    std::cout << "list[0] = " << stringlist[0] << std::endl;
    std::cout << "listcopy[0] = " << copylist[0] << std::endl;

    std::cout << std::endl;

    std::cout << "Int array : " << std::endl;
    for (int i = 0; i < (int)intlist.size(); i++)
        std::cout << "intlist[" << i << "] = " << intlist[i] << std::endl;

    std::cout << std::endl;
    Array<int> intassign = intlist;
    std::cout << "Int assign : " << std::endl;
    for (int i = 0; i < (int)intlist.size(); i++)
        std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

    std::cout << std::endl;
    std::cout << "change list : " << std::endl;
    for (int i = 0; i < (int)intlist.size(); i++)
	{
        intassign[i] = i + 1;
		std::cout << "intlist[" << i << "] = " << intlist[i] << std::endl;
		std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

	}

    std::cout << std::endl;

	try
	{
	    std::cout << "intlist[intlist.size + 1] = " << intlist[intlist.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}