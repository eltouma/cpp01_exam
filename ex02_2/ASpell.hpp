/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:17:58 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:18:19 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string	name;
	std::string	effects;
	ASpell(void);
	ASpell(const ASpell & obj);
	ASpell& operator=(const ASpell & rhs);

public:
	const std::string & getName() const;
	const std::string & getEffects() const;
	ASpell(const std::string & name, const std::string & effects);
	virtual ASpell* clone() const = 0;

	void	launch(const ATarget &target) const;
	virtual ~ASpell(void);
};
