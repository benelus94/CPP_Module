/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:59:12 by yongwkim          #+#    #+#             */
/*   Updated: 2021/10/12 16:59:37 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _Name);
		DiamondTrap(DiamondTrap const &dt);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &dt);

		using ScavTrap::attack;
		void	whoAmI();
};


#endif