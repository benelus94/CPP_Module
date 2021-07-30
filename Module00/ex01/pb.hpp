/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pb.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:04:51 by yongwkim          #+#    #+#             */
/*   Updated: 2021/07/13 17:43:13 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PB_HPP
# define CLASS_PB_HPP

#include <iostream>
#include <string>
#include "class_contact.hpp"

class pb
{
	contact	contacts[8];
	int		add_idx;
	int		n_contacts;

	public:
		void add(void);
		void search(void);

	pb()
	{
		n_contacts = 0;
		add_idx = 0;
	}
};

#endif