#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(void) : _name("John"), _effects("The only one")
{
}

ASpell::~ASpell(void)
{
}

ASpell::ASpell(const ASpell & obj)
{
	*this = obj;
}

ASpell & ASpell::operator=(const ASpell & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return (*this);
}

ASpell::ASpell(const std::string & name, const std::string & effects) : _name(name), _effects(effects)
{
}

const std::string & ASpell::getName(void) const
{
	return (_name);
}

const std::string & ASpell::getEffects(void) const
{
	return (_effects);
}

void	ASpell::launch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}
