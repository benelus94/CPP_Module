/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:04:51 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/10 14:30:46 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PB_HPP
# define PB_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

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