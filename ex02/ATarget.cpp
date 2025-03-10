/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:15:02 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:59:06 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) : _type("John")
{
}

ATarget::~ATarget(void)
{
//	std::cout << _type << ": My job here is done!" << std::endl;
}

ATarget::ATarget(const ATarget & obj)
{
	*this = obj;
}

ATarget& ATarget::operator=(const ATarget & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

const std::string & ATarget::getType() const
{
	return _type;
}

ATarget::ATarget(const std::string & type) : _type(type)
{
//	std::cout << _type << ": This looks like another boring day." << std::endl;
}

void	ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
