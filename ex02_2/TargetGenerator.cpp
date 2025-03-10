/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:08:45 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 23:20:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include "ATarget.hpp"
//#include "Fwoosh.hpp"
//#include "Dummy.hpp"
//#include "Fireball.hpp"
//#include "Polymorph.hpp"

TargetGenerator::TargetGenerator(void) : name("John"), title("The best")
{
}

TargetGenerator::~TargetGenerator(void)
{
	std::vector<ATarget*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
		delete *it;
	vect.clear();
//	std::cout << name << ": My job here is done!" << std::endl;
}

TargetGenerator::TargetGenerator(const TargetGenerator & obj)
{
	*this = obj;
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		title = rhs.title;
	}
	return (*this);
}

const std::string & TargetGenerator::getName() const
{
	return name;
}

const std::string & TargetGenerator::getTitle() const
{
	return title;
}

TargetGenerator::TargetGenerator(const std::string & name, const std::string & title) : name(name), title(title)
{
//	std::cout << name << ": This looks like another boring day." << std::endl;
}


void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (!target)
		return;
	std::vector<ATarget*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getType() == target->getType())
			return ;
	}
	vect.push_back(target->clone());
}

void	TargetGenerator::forgetTargetTYpe(const std::string &target_name)
{
	std::vector<ATarget*>::iterator	it;
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

ATarget*	TargetGenerator::createTarget(const std::string &target_name)
{
	std::vector<ATarget*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getType() == target_name)
			return *it;
	}
	return (NULL);
}
