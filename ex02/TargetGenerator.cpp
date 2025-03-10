/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:36:10 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 18:06:00 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

TargetGenerator::TargetGenerator(void) : _name("John") //, _title("Best")
{
}

TargetGenerator::~TargetGenerator(void)
{
	std::vector<ATarget*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
		delete *it;
	vect.clear();
//	std::cout << _name << ": My job here is done!" << std::endl;
}

TargetGenerator::TargetGenerator(const TargetGenerator & obj)
{
	*this = obj;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator & rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

/*
const std::string & TargetGenerator::getName() const
{
	return _name;
}

const std::string & TargetGenerator::getTitle() const
{
	return _title;
}

TargetGenerator::TargetGenerator(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void	TargetGenerator::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
*/

void	TargetGenerator::learnTargetType(ATarget *target)
{
	if (!target)
		return ;
	std::vector<ATarget*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getType() == target->getType())
			return ;
	}
	vect.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string & target_name)
{
	std::vector<ATarget*>::iterator it;
	for (it = vect.begin(); it != vect.end();)
	{
		if ((*it)->getType() == target_name)
		{
			delete *it;
			it = vect.erase(it);
		}
		else
			it++;
	}
}

ATarget*	TargetGenerator::createTarget(const std::string & target_name) //, const ATarget &target);
{
	std::vector<ATarget*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getType() == target_name)
			return (*it);
	}
	return (NULL);
}

