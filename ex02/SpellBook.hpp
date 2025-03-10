/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:02:50 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:47:51 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class SpellBook {
	std::string	_name;
//	std::string	_title;
	std::vector<ASpell*> vect;

	SpellBook(const SpellBook & obj);
	SpellBook& operator=(const SpellBook & rhs);

public:
/*
	const std::string & getName() const;
	const std::string & getTitle() const;
	void	setTitle(const std::string & title);
	SpellBook(const std::string & name, const std::string & title);
	void	introduce(void) const;
*/
	SpellBook(void); 
	void	learnSpell(ASpell *spell);
	void	forgetSpell(const std::string & spell_name);
	ASpell*	createSpell(const std::string & spell_name); //, const ATarget &target);
	~SpellBook(void);
};
