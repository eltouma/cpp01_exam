#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(void) : _type("The only one")
{
}

ATarget::~ATarget(void)
{
}

ATarget::ATarget(const ATarget & obj)
{
	*this = obj;
}

ATarget & ATarget::operator=(const ATarget & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

ATarget::ATarget(const std::string & type) : _type(type)
{
}

const std::string & ATarget::getType(void) const
{
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell & spell) const
{
	std::cout << _type << " has been "<< spell.getEffects() << "!" << std::endl;
}
