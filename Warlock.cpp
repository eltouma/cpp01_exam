#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

Warlock::Warlock(void) : _name("Richard"), _title("The only one")
{
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
		delete (*it);
	vect.clear();
}

Warlock::Warlock(const Warlock & obj)
{
	*this = obj;
}

Warlock & Warlock::operator=(const Warlock & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return (*this);
}

Warlock::Warlock(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string & Warlock::getName(void) const
{
	return (_name);
}

const std::string & Warlock::getTitle(void) const
{
	return (_title);
}

void	Warlock::setTitle(const std::string & title)
{
	_title = title;
}

void 	Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
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

void	Warlock::forgetSpell(const std::string &name)
{
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end();)
	{
		if ((*it)->getName() == name)
		{
			delete (*it);
			it = vect.erase(it);
		}
		else
			it++;
	}
}

void	Warlock::launchSpell(const std::string &spellname, const ATarget & target)
{
	std::vector<ASpell*>::iterator it;
	for (it = vect.begin(); it != vect.end(); it++)
	{
		if ((*it)->getName() == spellname)
			(*it)->launch(target);
	}
}

/*
int main()
{
	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
}
*/
