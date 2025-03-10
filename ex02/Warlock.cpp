/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:36:10 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 18:07:17 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

Warlock::Warlock(void) : _name("John"), _title("Best")
{
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock & obj)
{
	*this = obj;
}

Warlock& Warlock::operator=(const Warlock & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return (*this);
}

const std::string & Warlock::getName() const
{
	return _name;
}

const std::string & Warlock::getTitle() const
{
	return _title;
}

void	Warlock::setTitle(const std::string & title)
{
	_title = title;
}

Warlock::Warlock(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void	Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	spell_book.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string spell_name)
{
	spell_book.forgetSpell(spell_name);
}

void	Warlock::launchSpell(const std::string spell_name, const ATarget & target)
{
	ASpell *spell = spell_book.createSpell(spell_name);
	if (spell)
		spell->launch(target);
}

/*
int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball(); 

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
	delete polymorph;
	delete fireball;
}
*/
