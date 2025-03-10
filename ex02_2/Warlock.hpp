/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:17:58 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 23:09:30 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
	std::string	name;
	std::string	title;
//	std::vector<ASpell*>	vect;
	SpellBook	book;
	Warlock(void);
	Warlock(const Warlock & obj);
	Warlock& operator=(const Warlock & rhs);

public:
	const std::string & getName() const;
	const std::string & getTitle() const;
	void	setTitle(const std::string & title);
	Warlock(const std::string & name, const std::string & title);
	void	introduce(void) const;

	void	learnSpell(ASpell* spell);
	void	forgetSpell(const std::string &spell_name);
	void	launchSpell(const std::string &spell_name, const ATarget &target);
	~Warlock(void);
};
