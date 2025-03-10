#pragma once
#include <iostream>

class ATarget;

class ASpell
{
protected:
	std::string	_name;
	std::string	_effects;
	ASpell(void);
	ASpell(const ASpell & obj);
	ASpell & operator=(const ASpell & rhs);

public:
	const std::string & getName(void) const;
	const std::string & getEffects(void) const;
	virtual ASpell* clone(void) const = 0;
	ASpell(const std::string & name, const std::string & effects); 
	void	launch(const ATarget & target) const;
	virtual ~ASpell(void);
};
