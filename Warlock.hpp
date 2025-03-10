# pragma once
#include <iostream>
#include <vector>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;

class Warlock
{
	std::string	_name;
	std::string	_title;
	std::vector<ASpell*> vect;
	Warlock(void);
	Warlock(const Warlock & obj);
	Warlock & operator=(const Warlock & rhs);

public:
	Warlock(const std::string & name, const std::string & title); 
	const std::string & getName(void) const;
	const std::string & getTitle(void) const;
	void	setTitle(const std::string & title);
	void 	introduce(void) const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string &name);
	void	launchSpell(const std::string &spellname, const ATarget & target);
	virtual	~Warlock(void);
	//~Warlock(void);
};
