/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:08:45 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 23:22:20 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
//#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "BrickWall.hpp"

Warlock::Warlock(void) : name("John"), title("The best")
{
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock & obj)
{
	*this = obj;
}

Warlock& Warlock::operator=(const Warlock & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		title = rhs.title;
	}
	return (*this);
}

const std::string & Warlock::getName() const
{
	return name;
}

const std::string & Warlock::getTitle() const
{
	return title;
}

void	Warlock::setTitle(const std::string & title)
{
	this->title = title;
}

Warlock::Warlock(const std::string & name, const std::string & title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

void	Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}


void	Warlock::learnSpell(ASpell* spell)
{
/*
	if (!spell)
		return;
	std::vector<ASpell*>::iterator	it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	vect.push_back(spell->clone());
*/
	book.learnSpell(spell);
}


void	Warlock::forgetSpell(const std::string &spell_name)
{
	book.forgetSpell(spell_name);
}

void	Warlock::launchSpell(const std::string &spell_name, const ATarget &target)
{
	ASpell	*spell = book.createSpell(spell_name);
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
