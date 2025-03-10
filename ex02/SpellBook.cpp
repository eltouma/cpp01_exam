/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:36:10 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 18:05:49 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

SpellBook::SpellBook(void) : _name("John") //, _title("Best")
{
}

SpellBook::~SpellBook(void)
{
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
		delete *it;
	vect.clear();
//	std::cout << _name << ": My job here is done!" << std::endl;
}

SpellBook::SpellBook(const SpellBook & obj)
{
	*this = obj;
}

SpellBook& SpellBook::operator=(const SpellBook & rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

/*
const std::string & SpellBook::getName() const
{
	return _name;
}

const std::string & SpellBook::getTitle() const
{
	return _title;
}

SpellBook::SpellBook(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void	SpellBook::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
*/

void	SpellBook::learnSpell(ASpell *spell)
{
	if (!spell)
		return ;
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	vect.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string & spell_name)
{
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end();)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			it = vect.erase(it);
		}
		else
			it++;
	}
}

ASpell*	SpellBook::createSpell(const std::string & spell_name) //, const ATarget &target);
{
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spell_name)
			return (*it);
	}
	return (NULL);
}

