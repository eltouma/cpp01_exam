/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:17:58 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:59:47 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <vector>

#include "ASpell.hpp"
//#include "ATarget.hpp"

class SpellBook
{
	std::string	name;
	std::string	title;
	std::vector<ASpell*>	vect;
	//SpellBook(void);
	SpellBook(const SpellBook & obj);
	SpellBook& operator=(const SpellBook & rhs);

public:
	SpellBook(void);
	const std::string & getName() const;
	const std::string & getTitle() const;
	SpellBook(const std::string & name, const std::string & title);

	void	learnSpell(ASpell* spell);
	void	forgetSpell(const std::string &spell_name);
	ASpell*	createSpell(const std::string &spell_name);
	~SpellBook(void);
};
