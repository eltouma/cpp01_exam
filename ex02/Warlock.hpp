/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:02:50 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:52:29 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock {
	std::string	_name;
	std::string	_title;
//	std::vector<ASpell*> vect;
	SpellBook spell_book;
	Warlock(void); 
	Warlock(const Warlock & obj);
	Warlock& operator=(const Warlock & rhs);

public:
	const std::string & getName() const;
	const std::string & getTitle() const;
	void	setTitle(const std::string & title);
	Warlock(const std::string & name, const std::string & title);
	void	introduce(void) const;
	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string spell_name);
	void	launchSpell(const std::string spell_name, const ATarget &target);

/*
	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string & spell_name);
	ASpell*	createSpell(const std::string & spell_name); //, const ATarget &target);
*/
	~Warlock(void);
};
