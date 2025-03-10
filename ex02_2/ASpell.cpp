/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:08:45 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 21:36:16 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void) : name("John"), effects("The best")
{
}

ASpell::~ASpell(void)
{
//	std::cout << name << ": My job here is done!" << std::endl;
}

ASpell::ASpell(const ASpell & obj)
{
	*this = obj;
}

ASpell& ASpell::operator=(const ASpell & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		effects = rhs.effects;
	}
	return (*this);
}

const std::string & ASpell::getName() const
{
	return name;
}

const std::string & ASpell::getEffects() const
{
	return effects;
}

ASpell::ASpell(const std::string & name, const std::string & effects) : name(name), effects(effects)
{
//	std::cout << name << ": This looks like another boring day." << std::endl;
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
