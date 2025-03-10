/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:08:45 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 21:38:00 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) : type("The best")
{
}

ATarget::~ATarget(void)
{
//	std::cout << name << ": My job here is done!" << std::endl;
}

ATarget::ATarget(const ATarget & obj)
{
	*this = obj;
}

ATarget& ATarget::operator=(const ATarget & rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

const std::string & ATarget::getType() const
{
	return type;
}

ATarget::ATarget(const std::string & type) : type(type)
{
//	std::cout << name << ": This looks like another boring day." << std::endl;
}

void	ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
