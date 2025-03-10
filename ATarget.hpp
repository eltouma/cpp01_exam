#pragma once
#include <iostream>

class ASpell;

class ATarget
{
protected:
	std::string	_type;
	ATarget(void);
	ATarget(const ATarget & obj);
	ATarget & operator=(const ATarget & rhs);

public:
	const std::string & getType(void) const;
	virtual ATarget* clone(void) const = 0;
	ATarget(const std::string & type); 
	void	getHitBySpell(const ASpell & spell) const;
	virtual ~ATarget(void);
};
