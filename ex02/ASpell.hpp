/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:23:13 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:40:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell 
{
protected:
	std::string	_name;
	std::string	_effects;
	ASpell(void); 
	ASpell(const ASpell & obj);
	ASpell& operator=(const ASpell & rhs);

public:
	const std::string & getName() const;
	const std::string & getEffects() const;
	virtual ASpell* clone() const = 0;
	ASpell(const std::string & name, const std::string & effects);
	void	launch(const ATarget & target) const;
	virtual ~ASpell(void);
};
