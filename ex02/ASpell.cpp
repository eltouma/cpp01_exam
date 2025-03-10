/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:15:02 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:35:32 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void) : _name("John"), _effects("Best")
{
}

ASpell::~ASpell(void)
{
//	std::cout << _name << ": My job here is done!" << std::endl;
}

ASpell::ASpell(const ASpell & obj)
{
	*this = obj;
}

ASpell& ASpell::operator=(const ASpell & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return (*this);
}

const std::string & ASpell::getName() const
{
	return _name;
}

const std::string & ASpell::getEffects() const
{
	return _effects;
}

ASpell::ASpell(const std::string & name, const std::string & effects) : _name(name), _effects(effects)
{
//	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void	ASpell::launch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}
