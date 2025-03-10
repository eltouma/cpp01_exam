/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:08:45 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 23:10:37 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include "ASpell.hpp"
//#include "Fwoosh.hpp"
//#include "Dummy.hpp"
//#include "Fireball.hpp"
//#include "Polymorph.hpp"

SpellBook::SpellBook(void) : name("John"), title("The best")
{
}

SpellBook::~SpellBook(void)
{
	std::vector<ASpell*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
		delete *it;
	vect.clear();
//	std::cout << name << ": My job here is done!" << std::endl;
}

SpellBook::SpellBook(const SpellBook & obj)
{
	*this = obj;
}

SpellBook& SpellBook::operator=(const SpellBook & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		title = rhs.title;
	}
	return (*this);
}

const std::string & SpellBook::getName() const
{
	return name;
}

const std::string & SpellBook::getTitle() const
{
	return title;
}

SpellBook::SpellBook(const std::string & name, const std::string & title) : name(name), title(title)
{
//	std::cout << name << ": This looks like another boring day." << std::endl;
}


void	SpellBook::learnSpell(ASpell* spell)
{
	if (!spell)
		return;
	std::vector<ASpell*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	vect.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string &spell_name)
{
	std::vector<ASpell*>::iterator	it;
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

ASpell*	SpellBook::createSpell(const std::string &spell_name)
{
	std::vector<ASpell*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spell_name)
			return *it;
	}
	return (NULL);
}
