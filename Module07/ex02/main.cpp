/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:50:07 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/31 19:28:25 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include <iostream>

int main()
{
    Array<int> intlst(5);
    Array<std::string> strlst(2);

    strlst[0] = "good";
    strlst[1] = "test";

    std::cout << "String array : " << std::endl;
    for (int i = 0; i < (int)strlst.size(); i++)
        std::cout << "strlst[" << i << "] = " << strlst[i] << std::endl;
    std::cout << std::endl;

    Array<std::string> copylst(strlst);
	std::cout << "Copy list :" << std::endl;
	for (int i = 0; i < (int)copylst.size(); i++)
        std::cout << "copylst[" << i << "] = " << copylst[i] << std::endl;
		
    std::cout << "Modify strlst[0] to 'bad'" << std::endl;
    strlst[0] = "bad";
    std::cout << "strlst[0] = " << strlst[0] << std::endl;
    std::cout << "copylst[0] = " << copylst[0] << std::endl;

    std::cout << std::endl;

    std::cout << "Int array : " << std::endl;
    for (int i = 0; i < (int)intlst.size(); i++)
        std::cout << "intlst[" << i << "] = " << intlst[i] << std::endl;

    std::cout << std::endl;
    Array<int> intassign = intlst;
    std::cout << "Int assign : " << std::endl;
    for (int i = 0; i < (int)intassign.size(); i++)
        std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

    std::cout << std::endl;
    std::cout << "intlst[i] = i + 1 : " << std::endl;
    for (int i = 0; i < (int)intlst.size(); i++)
	{
        intlst[i] = i + 1;
		std::cout << "intlst[" << i << "] = " << intlst[i] << std::endl;
		std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

	}

    std::cout << std::endl;

	try
	{
	    std::cout << "intlst[intlst.size() + 1] = " << intlst[intlst.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}